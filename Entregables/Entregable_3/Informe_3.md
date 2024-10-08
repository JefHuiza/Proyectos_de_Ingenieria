<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>


# **Introducción**

Hoy en día, la IA en dispositivos de baja potencia y hardware incrustado ha sido cada vez más común en varias industrias porque la mayoría de las soluciones deben ser eficientes y portátiles. TinyML se basa en las redes neuronales artificiales, que se inspiran en el cerebro humano y en el profundo aprendizaje, que harevolucionado la forma de entender y analizar los datos. Asi mismo, esta supera incluso este límite al permitir la creación de modelos de aprendizaje profundo para dispositivos pequeñas con recursos limitados y alimentación por batería. Lo que lo destaca es el hecho de que el análisis de los datos se produce en tiempo real y con uso de energía casi nulo. TinyML tiene aplicaciones promisorias como fuentes en el campo de Internet de las cosas, vestibles, o sistemas de seguridad. 

En otras palabras, TinyML es una revolución en aprendizaje profundo que junta los elementos de hardware, algoritmos y software para facilitar el análisis de los datos en dispositivos de consumo energético inferior a miliwatts en pequeños periodos de tiempo, uniéndolos en sistemas siempre encendidos y también representa Machine Learning en microcontrolador dispositivos, es la práctica de modelar directamente sobre el hardware limitado, como el nano Arduino 33 BLE Sense. [^1][^2]

Estos modelos de TinyML se pueden entrenar utilizando plataformas como Edge Impulse, que proporciona un flujo de trabajo completo para el desarrollo de aplicaciones de aprendizaje automático en el borde.
En este informe, se describe el proceso de desarrollar un modelo de TinyML para inferir formas geométricas y dígitos en un Arduino Nano 33 BLE Sense, utilizando Edge Impulse y el sitio web de Harvard TinyML para la recopilación de datos. El objetivo es encender un LED rojo cuando el Arduino dibuje un círculo, un LED azul cuando dibuje el número 3 y un LED verde cuando dibuje el número 1.

# **Selección de Hardware y Herramientas:**

A continuacion se muestran las herramientas utilizadas en el desarollo e implementacion del modelo de TinyML
### Arduino Nano 33 BLE Sense
<p align="center">
  <img src="https://github.com/user-attachments/assets/0060bc4f-80ac-408a-bb57-bcdfc7486979" alt="Arduino Nano" width="400px" />
</p>


Es una placa de desarrollo de bajo costo basada en el microcontrolador ATSAMD21G18.
Sensores: Integra una variedad de sensores, incluyendo un acelerómetro de 3 ejes, un giroscopio de 3 ejes, un magnetómetro de 3 ejes, y un sensor de temperatura.
Función en el proyecto: Actúa como el cerebro del proyecto, recolectando datos de los sensores (en este caso, los datos de dibujo a través del acelerómetro y el giroscopio), procesándolos y controlando la salida (encendido del LED).
Conectividad: Incluye conectividad Bluetooth Low Energy (BLE) para la comunicación con dispositivos externos.

### Edge Impulse
<p align="center">
  <img src="https://github.com/user-attachments/assets/550ea5c5-3aeb-454f-90f9-daa2367ca1e1" alt="Edge Impulse" width="400px" />
</p>

Plataforma en línea para el desarrollo de modelos de aprendizaje automático para dispositivos IoT.
Función en el proyecto: Se utilizó para entrenar un modelo de clasificación capaz de reconocer los patrones de dibujo a partir de los datos recolectados por el Arduino Nano 33 BLE Sense.

### Harvard TinyML
<p align="center">
  <img src="https://github.com/user-attachments/assets/07ae337c-68d7-4b5f-8e2a-6c3b0f081951" alt="Magic Wand" width="400px" />
</p>

Plataforma en línea que proporciona herramientas y recursos para el desarrollo de modelos de aprendizaje automático para dispositivos de bajo consumo energético.
Función en el proyecto: Se utilizó para recopilar los patrones de dibujo, generando datos en formato JSON.

### Google Colab
<p align="center">
  <img src="https://github.com/user-attachments/assets/36fb675f-1bf7-42d0-a2c0-285444479b9e" alt="Google Colab" width="400px" />
</p>

Entorno de programación basado en la nube que proporciona acceso gratuito a GPUs y TPUs.
Función en el proyecto: Se usó para procesar y reformatear los datos JSON obtenidos de Harvard TinyML, adaptándolos al formato requerido por Edge Impulse.

### JSON
<p align="center">
  <img src="https://github.com/user-attachments/assets/2dd615ef-d68b-4f17-ab83-a9767ed241a1" alt="JSON" width="400px" />
</p>

Formato de intercambio de datos ligero y legible por humanos.
Función en el proyecto: Se utilizó para almacenar los datos de los patrones de dibujo recopilados por Harvard TinyML.

### IDE de Arduino
<p align="center">
  <img src="https://github.com/user-attachments/assets/01263e1c-4162-419d-8514-a188588a1c50" alt="Arduino IDE" width="400px" />
</p>

Entorno de desarrollo integrado para programar placas Arduino.
Función en el proyecto: Se usó para desarrollar el código que se ejecuta en el Arduino Nano 33 BLE Sense, implementando la lógica de detección de formas y control del LED.

# **Procedimiento**

###	**Recopilación de datos:**
Se utilizó el sitio web de Harvard TinyML (https://tinyml.seas.harvard.edu/magic_wand/) para recopilar patrones de dibujo del Arduino Nano 33 BLE Sense. Los datos se guardaron en formato JSON.
###	**Formateo de datos:** 
Debido a que el formato JSON del sitio web no era compatible con Edge Impulse, se utilizó Google Colab para reformatear los datos en el formato adecuado.
###	**Entrenamiento del modelo:** 
Los datos reformateados se cargaron en Edge Impulse, donde se entrenó un modelo de clasificación para reconocer los patrones de dibujo.
<p align="center">
  <img src="https://github.com/user-attachments/assets/7c046314-447d-4b47-aba5-cac5eff60384" alt="Imagen 2" width="400px" />
  <img src="https://github.com/user-attachments/assets/99d52f89-940a-4ede-a5e2-9f379f62a67e" alt="Imagen 2" width="350px" />
</p>

En el entrenamiento de nuestro modelo logramos obetener un 91.1% de exactitud y una pérdida de 0.29 en general,con respecto a esta informacion el modelo resulto ser eficiente.
<p align="center">
  <img src="https://github.com/user-attachments/assets/8f0271fb-d0c1-43a0-b9aa-dcf1442c07eb" alt="Imagen 2" width="400px" />
</p>

Tenemos la imagen de la exploracion de los datos
<p align="center">
  <img src="https://github.com/user-attachments/assets/80df7a1b-0323-41db-a1ff-f47a04a937b7" alt="Imagen 2" width="400px" />
</p>

Aqui al generar caracteristicas se tomo un total de 8 ms en el tiempo de procesamiento y un uso maximo de 1KB 
<p align="center">
  <img src="https://github.com/user-attachments/assets/08439b3a-b212-43c0-952d-1be65d6b88d5" alt="Imagen 2" width="400px" />
</p>

###	**Implementación en Arduino:** 
Una vez que se descargó el modelo entrenado, se utilizó en el IDE de Arduino para desarrollar el código que detecta las formas correspondientes y enciende el LED adecuado.
<p align="center">
  <img src="https://github.com/user-attachments/assets/f8a8391c-a613-4dcb-a7c0-fdcaf91978c9" alt="Imagen 2" width="400px" />
</p>

# **Resultados**

El modelo de TinyML entrenado en Edge Impulse fue capaz de clasificar con éxito los patrones de dibujo del Arduino Nano 33 BLE Sense, encendiendo el LED correspondiente en cada caso:

**Círculo detectado, LED rojo encendido**

https://github.com/user-attachments/assets/7a0876de-4ce6-4efe-8a4b-6b630373030b

**Número 3 detectado, LED azul encendido**

https://github.com/user-attachments/assets/83924bad-d443-498e-a25e-38fdb8fafa26

**Número 1 detectado, LED verde encendido**

https://github.com/user-attachments/assets/38127279-16a0-48d3-93e6-53ec249c6aa5


# **Discusión** 
En nuestro proyecto, nos enfocamos en desarrollar un sistema de reconocimiento de figuras y números (como un círculo, el número 3 y el número 1) y vincular ese reconocimiento con la activación de LEDs en un Arduino Nano 33 BLE. A lo largo del desarrollo, nos encontramos con varios desafíos tanto en la parte de entrenamiento del modelo como en la integración con el hardware, que hicieron el proceso mucho más complejo de lo que esperábamos. Aquí discutimos los detalles del proyecto y los obstáculos que enfrentamos.

### **1. Teachable Machine: entrenamiento del modelo para reconocimiento de figuras.**

El primer desafío fue reunir suficientes data para entrenar el modelo. Aunque Teachable Machine es intuitiva, rápidamente nos dimos cuenta de que la cantidad de datos de entrada era clave. Si el modelo no tenía suficientes gestos claras de cada figura, los resultados eran inconsistentes. Tuvimos que capturar muchos gestos en diferentes condiciones de iluminación y desde diferentes ángulos para asegurar que el sistema pudiera reconocer cada figura de manera confiable.

Además, tuvimos que ajustar el modelo para evitar que reconociera erróneamente figuras similares o que cometiera confusiones entre el número 1 y otras formas alargadas. Encontrar el balance entre la cantidad de datos y la precisión del modelo fue un reto en esta fase.

### **2. Edge Impulse: optimización y transición al Arduino**

Una vez que logramos entrenar el modelo en Teachable Machine, lo pasamos a Edge Impulse para optimizarlo y prepararlo para su ejecución en el Arduino Nano 33 BLE. Aquí nos encontramos con algunos problemas técnicos. El primero fue la compatibilidad del formato del modelo. Hubo momentos en que el modelo exportado desde Teachable Machine no era aceptado de inmediato en Edge Impulse, lo que requirió algunos ajustes en el formato de los datos y en cómo configurábamos las entradas y salidas del modelo.

Otro reto fue optimizar el modelo para que fuera lo suficientemente ligero como para ejecutarse en el Arduino. Aunque Edge Impulse ofrece herramientas para reducir el tamaño del modelo, nos dimos cuenta de que, si lo optimizábamos demasiado, el reconocimiento de las figuras se volvía impreciso. Hubo que encontrar un punto medio entre rendimiento y precisión para que el sistema reconociera las figuras correctamente y a la vez pudiera ejecutarse en un dispositivo de recursos limitados.

### **3. Arduino Nano 33 BLE: integración y problemas con los LEDs**

Una vez que optimizamos el modelo, aquí fue donde enfrentamos los mayores desafíos. El objetivo era hacer que el Arduino interpretara las figuras reconocidas y encendiera los LEDs correspondientes. Por ejemplo, si reconocía un círculo, se encendía un LED; si veía el número 3 o el número 1, otros LEDs se activaban.

Además, nos encontramos con problemas en la comunicación entre el modelo y los LEDs. Aunque el Arduino recibía la salida del modelo, no siempre encendía los LEDs correctamente. Esto requería ajustes en el código para asegurarnos de que las señales de salida del modelo se tradujeran correctamente en las acciones esperadas. [^3]


# **Conclusion**

En coclusion, este proyecto de reconocimiento se pudo obtener las espectativas que se esperó, esto nos brindó más que solo el dominio de herramientas y tecnologías como Teachable Machine, Edge Impulse, y Arduino Nano 33 BLE. Nos permitió además experimentar de primera mano los retos y beneficios de trabajar con TinyML, y nos preparó para enfrentar problemas complejos en el desarrollo de soluciones de inteligencia artificial en hardware de baja potencia. Aprender a crear modelos de machine learning eficientes y ejecutarlos en dispositivos embebidos es una habilidad clave en la innovación tecnológica moderna, y esta experiencia nos ha dado un fundamento sólido para avanzar en el campo de la inteligencia artificial, permitiéndonos incluso aportar soluciones tecnológicas más inteligentes y sostenibles en el futuro. 

# **Referencias**
[^1]: Tardif, A. (2023). TinyML: el futuro del aprendizaje automático en una escala minúscula. https://www.unite.ai/es/tinyml-the-future-of-machine-learning-on-a-minuscule-scale/

[^2]: DataScientest. (2024). TinyML: La revolución de la IA en dispositivos de baja potencia. DataScientest. https://datascientest.com/es/tinyml-todo-sobre
[^3]: C.-K. Kwon, “Development of embedded machine learning finger number recognition application using edge impulse platform,” in 2023 Congress in Computer Science, Computer Engineering, & Applied Computing (CSCE), 2023, vol. 22, pp. 2697–2699. doi: 10.1109/csce60160.2023.00433 

