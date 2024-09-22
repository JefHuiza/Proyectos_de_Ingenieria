<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

# Implementacion del Internet de las cosas (IoT)

<p align="center">
  <img src="https://github.com/user-attachments/assets/c7075090-9988-401b-a8b6-97ab1d98c17a" alt="Imagen 2" width="400px" />
</p>

## 1.Introduccion
El internet de las cosas  es una revolución  tecnológica que permite  conectar dispositivos cotidianos  a la red, estableciendo sistemas de monitoreo y control a distancia que modifican la forma en que interactuamos con el ambiente. Esta tecnología se hace fundamental para la transformación de los hogares inteligentes, la automatización industrial, la gestión de recursos y la optimización de procesos asociados a diferentes sectores. A medida que nos acercamos al término de este periodo, Gartner (2023) estima que habrá más de 25 mil millones de dispositivos IoT conectados para 2025, lo que hace patente su creciente importancia en la llamada era digital. 

Este informe detalla la implementación de un sistema IoT utilizando la plataforma Arduino Cloud y el MKR IoT Carrier, diseñado para monitorear y controlar condiciones ambientales como la temperatura, la humedad y el nivel de luz. La plataforma Arduino Cloud permite una integración y gestión eficiente de dispositivos, lo que facilita a los usuarios la captura de datos en tiempo real y la toma de decisiones remotas basadas en esos datos. Por otra parte incluye la conexión de sensores específicos al Arduino MKR WiFi 1010, un dispositivo creado para simplificar el desarrollo de aplicaciones IoT. Mediante el uso de un sensor de humedad y relés para controlar las luces, se establece un sistema que no solo monitorea las condiciones ambientales, sino que también permite intervenir en ellas. En las siguientes secciones se han incluido una descripción de los componentes empleados, la metodología de implementación y los resultados alcanzados. 
## 2.Metodologia
El Arduino Explore IoT Kit es una plataforma escencial para conocer y aprender a crear proyectos de Internet de las Cosas (IoT).Incluye el MKR IoT Carrier el cual usaremos para controlar luces artificiales mediante reles ,asi como la plataforma de Arduino Cloud para el monitoreo y control de los datos.

#### Componentes utilizados:
- Arduino MKR WiFi 1010
- MKR IoT Carrier
- Sensor de humedad
- Micro USB cable

<p align="center">
  <img src="https://github.com/user-attachments/assets/32954f2f-17a2-48b1-8289-0c98b80a8c7b" alt="Imagen 2" width="270px" />
  <img src="https://github.com/user-attachments/assets/358d5178-d550-42d7-931d-61ed0ac891e0" alt="Imagen 2" width="270px" />
  <img src="https://github.com/user-attachments/assets/7ec314a0-b34d-43b4-b18d-cac00e3ca105" alt="Imagen 2" width="200px" />
  <img src="https://github.com/user-attachments/assets/91117f37-2286-464b-8649-7aa64823da97" alt="Imagen 2" width="200px" />
</p>

#### Uso de la plataforma Arduino Cloud
<p align="center">
  <img src="https://github.com/user-attachments/assets/e5d26c18-5165-429c-9bab-ed73ca0d9de0" alt="Imagen 2" width="600px" />
</p>

 Aqui podemos observar la platafoma Arduino Cloud , en la pantalla principal podemos encontrar el menu con varias secciones:

 - Sketchs: Proyectos de codigo
 - Devices: Dispositivos concetados a la nube
 - Things : Obejtos que puedes controlar
 - Dashboards: Paneles para los datos 
 - Getting Started: Apartado que presenta una guia rapida de como usar Arduino Cloud
 
 Y mas opciones relevantes para el uso de la plataforma.
 
 La metodologia realizada es importante para los proyectos IoT,ya que nos ofrece una plataforma completa que abarca la captura de datos y analisis.

## 3.Resultados
Lo primero es conectar el sensor de humedad externo a la MKR IoT Carrier

<p align="center">
  <img src="https://github.com/user-attachments/assets/7d1b6067-6283-4f4f-99c5-4d4b934f2f5f" alt="Imagen 2" width="300px" />
</p>

Conectar tu placa Arduino al ordenador y configurar el dispositivo.

<p align="center">
  <img src="https://github.com/user-attachments/assets/65fffd08-26c8-4df3-8b39-8a5f40c2f86d" alt="Imagen 2" width="300px" />
</p>

### Codigo Utilizado

```cpp
#include "thingProperties.h"
#include <Arduino_MKRIoTCarrier.h>

MKRIoTCarrier carrier;

int moistPin = A5;

String relayState1 = "";
String relayState2 = "";

void setup() {
  // Inicializa el puerto serie y espera a que se abra:
  Serial.begin(9600);
  // Definido en thingProperties.h
  initProperties();

  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  CARRIER_CASE = true;
  carrier.begin();

  setDebugMessageLevel(4); // Obtener información/error de la nube
  ArduinoCloud.printDebugInfo();

  while (ArduinoCloud.connected() != 1) {
    ArduinoCloud.update();
    carrier.display.setTextSize(3);
    carrier.display.setCursor(20, 70);
    carrier.display.println("Waiting For");
    carrier.display.setCursor(5, 110);
    carrier.display.println("Connection...");
    delay(500);
  }
}

void loop() {
  ArduinoCloud.update();

  if (relay_1 == false) {
    carrier.Relay1.open();
    relayState1 = "ON";
  } else {
    carrier.Relay1.close();
    relayState1 = "OFF";
  }

  if (relay_2 == false) {
    carrier.Relay2.open();
    relayState2 = "ON";
  } else {
    carrier.Relay2.close();
    relayState2 = "OFF";
  }

  if (carrier.Light.colorAvailable()) {
    int none; // no se usará
    carrier.Light.readColor(none, none, none, light);
  }

  temperature = carrier.Env.readTemperature();
  humidity = carrier.Env.readHumidity();

  int rawMoistValue = analogRead(moistPin);
  moistValue = map(rawMoistValue, 0, 1023, 100, 0);
}

void onRelay1Change() {
  // Hacer algo
}

void onRelay2Change() {
  // Hacer algo
}

void onRgbColorChange() {
  // Hacer algo
  uint8_t r, g, b;
  rgbColor.getValue().getRGB(r, g, b);
  if (rgbColor.getSwitch()) {
    carrier.leds.fill(carrier.leds.Color(g, r, b), 0, 5);
    carrier.leds.show();
  } else {
    carrier.leds.fill(0, 0, 5);
    carrier.leds.show();
  }
}

void onUpdateDisplayChange() {
  // Hacer algo
  carrier.display.fillScreen(ST77XX_WHITE);
  carrier.display.setTextColor(ST77XX_RED);
  carrier.display.setTextSize(2);

  carrier.display.setCursor(20, 30);
  carrier.display.print("Temp: ");
  carrier.display.print(temperature);
  carrier.display.print(" C");

  carrier.display.setCursor(20, 50);
  carrier.display.print("Humi: ");
  carrier.display.print(humidity);
  carrier.display.print(" %");

  carrier.display.setTextColor(ST77XX_ORANGE);
  carrier.display.setCursor(20, 70);
  carrier.display.print("Light: ");
  carrier.display.print(light);

  carrier.display.setTextColor(ST77XX_BLUE);
  carrier.display.setCursor(20, 90);
  carrier.display.print("Moist: ");
  carrier.display.print(moistValue);
  carrier.display.print(" %");

  carrier.display.setTextColor(ST77XX_BLUE);
  carrier.display.setCursor(20, 120);
  carrier.display.print("R1: ");
  carrier.display.print(relayState1);

  carrier.display.print(" R2: ");
  carrier.display.print(relayState2);

  updateDisplay = false;
}
```
### Resultado Final 

<p align="center">
  <img src="" alt="Imagen 2" width="300px" />  ....................................... FALTA IMAGEN
</p>


### Dashboards

<p align="center">
  <img src="https://github.com/user-attachments/assets/ae556574-b5ba-4bd7-a2ba-025447023982" alt="Imagen 2" width="300px" />
</p>

Tenemos que interactuar con el sensor de humedad para provocar movimiento en los datos y de esa manera poder controlar y monitorear los elementos visuales desde el Dashboard , asi como se muestra en la imagen.


## 4.Discuciones 

El Internet de las Cosas (IoT) está transformando diversos sectores, desde la cadena de suministro hasta la educación y la gestión ambiental. Según un artículo de Vorecol (2024), el IoT permite un control preciso y en tiempo real de todos los eslabones de la cadena de suministro, lo que mejora la eficiencia y reduce los costos operativos. Así mismo, TD SYNNEX (2021) señala que el futuro del IoT implica una integración más profunda con la inteligencia artificial y la automatización, lo que potenciará aún más la toma de decisiones basada en datos. En este informe, la implementación práctica con plataformas como Arduino Cloud, que se ha mencionado anteriormente, demuestra cómo se pueden conectar sensores y dispositivos para gestionar datos ambientales y responder de manera efectiva.Ademas el IoT no solo consiste en la conectividad de dispositivos , sino tambien en la la capacidad que estos poseen para recolectar datos de los sensores conectados y realizar analisis al instante. Esto es importante para mejorar la toma de acciones , ya sea en la automatizacion de procesos industriales o la gestion de recusos.

## 5.Conclusiones
Se ha logrado implementar con éxito el sistema IoT utilizando la plataforma Arduino Cloud y el MKR IoT Carrier, permitiendo el monitoreo y control de variables ambientales en tiempo real. Gracias a esta configuración, se pueden visualizar datos como temperatura, humedad y niveles de luz de forma instantánea a través de la nube.

## 6.Referencias
Aquí está la cita en formato APA:

Universidad EIA. (2023). *Especialización en Internet de las Cosas (IoT)*. Recuperado de [https://www.eia.edu.co/wp-content/uploads/2023/10/Especializacio%CC%81n-en-Internet-de-las-Cosas-IOT.pdf](https://www.eia.edu.co/wp-content/uploads/2023/10/Especializacio%CC%81n-en-Internet-de-las-Cosas-IOT.pdf)

TD SYNNEX. (2021, noviembre 23). ¿Qué reserva el futuro para el Internet de las Cosas? TD SYNNEX Blog. Recuperado de https://blog-es.lac.tdsynnex.com/que-reserva-el-futuro-para-el-internet-de-las-cosas.

Vorecol. (2024). ¿De qué manera el Internet de las Cosas (IoT) está revolucionando la gestión de la cadena de suministro? Vorecol.com. https://vorecol.com/es/articulos/articulo-de-que-manera-el-internet-de-las-cosas-iot-esta-revolucionando-la-gestion-de-la-cadena-de-suministro-109472





