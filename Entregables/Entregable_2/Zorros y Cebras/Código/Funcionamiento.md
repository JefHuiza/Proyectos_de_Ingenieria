# Introducción
En este proyecto, hemos desarrollado un modelo de red neuronal convolucional (CNN) utilizando TensorFlow y Keras para abordar problemas de clasificación de imágenes entre zorros y cebras. El enfoque abarcó desde la configuración del entorno y la creación de utilidades, hasta el entrenamiento y análisis profundo del comportamiento del modelo, asegurando una robusta capacidad de generalización. A continuación, explicamos en detalle cada una de las secciones clave del código, destacando su relevancia en el proceso completo.

## **Explicación de cada parte del código**
Primero, nos aseguramos de que todas las librerías necesarias estuvieran instaladas y configuradas correctamente, estableciendo la base para un entorno eficiente de trabajo con CNNs. Esto incluyó herramientas para el preprocesamiento de imágenes, visualización y manejo de datasets, así como la creación y evaluación de modelos. Este primer paso fue esencial para preparar el camino hacia la construcción y entrenamiento de nuestro modelo.

Luego, definimos un conjunto de funciones utilitarias que optimizan el manejo de los datos y la visualización de los resultados. Estas funciones incluyeron técnicas para suavizar curvas de entrenamiento, graficar la precisión y pérdida del modelo, y generar datos sintéticos. Además, incorporamos herramientas para guardar y cargar el historial del entrenamiento, lo que nos permitió retomar el trabajo en cualquier momento, garantizando un flujo de trabajo continuo y eficiente.

Finalmente, construimos la arquitectura de nuestro modelo CNN utilizando un enfoque secuencial. A través de la combinación de capas convolucionales, de pooling y densas, logramos que el modelo detectara patrones complejos en las imágenes, mejorando su capacidad de clasificación. También incluimos técnicas como el dropout para evitar el sobreajuste y asegurar que el modelo generalizara adecuadamente. Este diseño detallado nos permitió abordar con éxito la tarea de clasificación binaria en imágenes.

## **Resultados**
Los resultados obtenidos con nuestro modelo superaron nuestras expectativas. Logramos una precisión en la clasificación que rivaliza con los modelos actualizados del campo, destacando especialmente en su capacidad para generalizar a datos no vistos. La combinación de técnicas de aumento de datos y el análisis exhaustivo de los mapas de características permitieron afinar el modelo a un nivel de rendimiento excepcional.


