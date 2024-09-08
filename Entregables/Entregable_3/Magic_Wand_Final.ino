/* Edge Impulse ingestion SDK
 * Copyright (c) 2022 Edge Impulse Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* Includes ---------------------------------------------------------------- */
#include <A_inferencing.h>
#include <Arduino_LSM9DS1.h>

#define NUM_FEATURES 124 // Número total de características esperadas (62 pares de X, Y)

// Array para almacenar las lecturas del acelerómetro
float features[NUM_FEATURES];

int raw_feature_get_data(size_t offset, size_t length, float *out_ptr) {
    memcpy(out_ptr, features + offset, length * sizeof(float));
    return 0;
}

void setup() {
    Serial.begin(115200);
    while (!Serial);
    Serial.println("Edge Impulse Inferencing Demo");

    pinMode(LEDR, OUTPUT);
    pinMode(LEDG, OUTPUT);
    pinMode(LEDB, OUTPUT);

    turn_off_leds(); // Apaga todos los LEDs al inicio

    if (!IMU.begin()) {
        Serial.println("Failed to initialize IMU!");
        while (1);
    }
}

void loop() {
    ei_printf("Edge Impulse standalone inferencing (Arduino)\n");

    // Captura las coordenadas en tiempo real desde el acelerómetro
    for (int i = 0; i < NUM_FEATURES / 2; i++) {
        if (IMU.accelerationAvailable()) {
            float x, y, z;
            IMU.readAcceleration(x, y, z);
            
            // Almacena las coordenadas X y Y en el array
            features[2 * i] = x;
            features[2 * i + 1] = y;
        }
        delay(100); // Ajusta el retraso si es necesario para sincronizar con la velocidad de muestreo
    }

    if (sizeof(features) / sizeof(float) != EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE) {
        ei_printf("The size of your 'features' array is not correct. Expected %lu items, but had %lu\n",
                  EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE, sizeof(features) / sizeof(float));
        delay(1000);
        return;
    }

    ei_impulse_result_t result = { 0 };

    signal_t features_signal;
    features_signal.total_length = sizeof(features) / sizeof(features[0]);
    features_signal.get_data = &raw_feature_get_data;

    EI_IMPULSE_ERROR res = run_classifier(&features_signal, &result, false /* debug */);
    if (res != EI_IMPULSE_OK) {
        ei_printf("ERR: Failed to run classifier (%d)\n", res);
        return;
    }

    ei_printf("run_classifier returned: %d\r\n", res);
    print_inference_result(result);

    delay(1000); // Pausa de 1 segundo antes de repetir el ciclo
}

void print_inference_result(ei_impulse_result_t result) {
    ei_printf("Timing: DSP %d ms, inference %d ms, anomaly %d ms\r\n",
              result.timing.dsp,
              result.timing.classification,
              result.timing.anomaly);

    // Variable para almacenar el índice de la categoría más probable
    int max_index = -1;
    float max_value = 0.0;

    // Busca la categoría con el valor de confianza más alto
    for (uint16_t i = 0; i < EI_CLASSIFIER_LABEL_COUNT; i++) {
        ei_printf("  %s: ", ei_classifier_inferencing_categories[i]);
        ei_printf("%.5f\r\n", result.classification[i].value);

        if (result.classification[i].value > max_value) {
            max_value = result.classification[i].value;
            max_index = i;
        }
    }

    // Enciende el LED correspondiente basado en el valor máximo
    turn_on_leds(max_index);

#if EI_CLASSIFIER_HAS_ANOMALY
    ei_printf("Anomaly prediction: %.3f\r\n", result.anomaly);
#endif
}

void turn_off_leds() {
    digitalWrite(LEDR, HIGH);
    digitalWrite(LEDG, HIGH);
    digitalWrite(LEDB, HIGH);
}

void turn_on_leds(int pred_index) {
    turn_off_leds(); // Apaga todos los LEDs antes de encender uno

    switch (pred_index) {
        case 0:
            // Enciende LED rojo
            digitalWrite(LEDR, LOW);
            break;
        case 1:
            // Enciende LED verde
            digitalWrite(LEDG, LOW);
            break;
        case 2:
            // Enciende LED azul
            digitalWrite(LEDB, LOW);
            break;
        default:
            // Apaga todos los LEDs si el índice no es válido
            turn_off_leds();
            break;
    }
}
