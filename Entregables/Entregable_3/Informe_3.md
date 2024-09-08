<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>


# **Introducción**

Hoy en día, la IA en dispositivos de baja potencia y hardware incrustado ha sido cada vez más común en varias industrias porque la mayoría de las soluciones deben ser eficientes y portátiles. TinyML se basa en las redes neuronales artificiales, que se inspiran en el cerebro humano y en el profundo aprendizaje, que harevolucionado la forma de entender y analizar los datos. Asi mismo, esta supera incluso este límite al permitir la creación de modelos de aprendizaje profundo para dispositivos pequeñas con recursos limitados y alimentación por batería. Lo que lo destaca es el hecho de que el análisis de los datos se produce en tiempo real y con uso de energía casi nulo. TinyML tiene aplicaciones promisorias como fuentes en el campo de Internet de las cosas, vestibles, o sistemas de seguridad. 

En otras palabras, TinyML es una revolución en aprendizaje profundo que junta los elementos de hardware, algoritmos y software para facilitar el análisis de los datos en dispositivos de consumo energético inferior a miliwatts en pequeños periodos de tiempo, uniéndolos en sistemas siempre encendidos y también representa Machine Learning en microcontrolador dispositivos, es la práctica de modelar directamente sobre el hardware limitado, como el nano Arduino 33 BLE Sense (Tardif, A. (2023)).

Estos modelos de TinyML se pueden entrenar utilizando plataformas como Edge Impulse, que proporciona un flujo de trabajo completo para el desarrollo de aplicaciones de aprendizaje automático en el borde.
En este informe, se describe el proceso de desarrollar un modelo de TinyML para inferir formas geométricas y dígitos en un Arduino Nano 33 BLE Sense, utilizando Edge Impulse y el sitio web de Harvard TinyML para la recopilación de datos. El objetivo es encender un LED rojo cuando el Arduino dibuje un círculo, un LED azul cuando dibuje el número 3 y un LED verde cuando dibuje el número 1.

# **Selección de Hardware y Herramientas:**

A continuacion se muestran las herramientas utilizadas en el desarollo e implementacion del modelo de TinyML
### Arduino Nano 33 BLE Sense
<p align="center">
  <img src="https://github.com/user-attachments/assets/62dc15a7-a4e0-42c8-a3a0-34b92a64dff9" alt="Imagen 1" width="200px" />
</p>

### Edge Impulse
<p align="center">
  <img src="https://github.com/user-attachments/assets/7b0f2feb-130a-42d4-aa1c-44848a5c339b" alt="Imagen 2" width="400px" />
</p>

# **Procedimiento**

###	**Recopilación de datos:**
Se utilizó el sitio web de Harvard TinyML (https://tinyml.seas.harvard.edu/magic_wand/) para recopilar patrones de dibujo del Arduino Nano 33 BLE Sense. Los datos se guardaron en formato JSON.
###	**Formateo de datos:** 
Debido a que el formato JSON del sitio web no era compatible con Edge Impulse, se utilizó Google Colab para reformatear los datos en el formato adecuado.
###	**Entrenamiento del modelo:** 
Los datos reformateados se cargaron en Edge Impulse, donde se entrenó un modelo de clasificación para reconocer los patrones de dibujo.
###	**Implementación en Arduino:** 
Una vez que se descargó el modelo entrenado, se utilizó en el IDE de Arduino para desarrollar el código que detecta las formas correspondientes y enciende el LED adecuado.





# **Resultados**
# **Discusión** 
# **Referencias**
