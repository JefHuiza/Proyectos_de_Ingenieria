<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

# Simulación de componentes mecánicos


## 1.Introduccion

Las simulaciones computacionales, asistidas por software de ingeniería asistida por computadora (CAE), son herramientas cruciales para validar prototipos sometidos a cargas operativas. Estas simulaciones siguen tres etapas principales: preproceso, proceso y postproceso. Durante la fase de preproceso, se determinan las condiciones geométricas mediante ingeniería inversa, como el escaneo 3D, y se selecciona el material adecuado para la investigación, como el ácido poliláctico (PLA). En esta fase también se establecen las condiciones de contorno y se evalúa la calidad de la malla para garantizar resultados convergentes. En la etapa de proceso, se llevan a cabo análisis estructurales y optimizaciones topológicas, mientras que en el postproceso se analizan las deformaciones y los esfuerzos resultantes, permitiendo determinar la resistencia mecánica del prototipo antes de su manufactura (Safla et al., 2020)[^1].

Por otro lado, las simulaciones de esfuerzos dinámicos también son esenciales para el estudio del impacto de las cargas mecánicas en productos perecederos, como los frutos de durazno (Prunus persica). Estas frutas, con corta vida de anaquel, son susceptibles a daños físicos durante el transporte, lo que puede causar pérdidas significativas. En un estudio, se diseñó y evaluó un prototipo para simular dichos esfuerzos en dos variedades de durazno bajo diferentes cargas y grados de madurez, evaluando parámetros clave como la pérdida de peso, la firmeza y la respiración. Los resultados mostraron diferencias significativas en la firmeza y el color entre variedades y tratamientos (Victoria-Escamilla et al., 2013)[^2].

Adicionalmente, se han desarrollado algoritmos eficientes para modelar la interacción entre imperfecciones estructurales, como las que aparecen en placas elásticas bajo un campo de estrés uniforme. Utilizando herramientas computacionales como AutoCAD y el lenguaje de programación LISP, se han simulado configuraciones de agujeros circulares en placas y validado los resultados mediante elementos finitos. Estos avances permiten evaluar con precisión la interacción entre defectos y mejorar el diseño estructural (Monroy & Godoy, 1999)[^3].

En este proyecto, se utilizó Onshape para ejecutar una simulación de flujo de fluido incompresible, para posteriormente realizar un análisis estructural estático de nuestro modelo utilizado. El objetivo principal es evaluar la automatización del modelo, asegurando que el modelo no necesite ningun tipo uso de fuerzas externas o internas al sistema. Las capacidades avanzadas de Onshape proporciona una base sólida para validar la viabilidad y durabilidad del diseño propuesto.

## 2.Metodologia

El ensamblaje fue diseñado utilizando Onshape, comenzando con la creación de un boceto inicial que incluye una serie de líneas rectas y cortes biselados a 45 grados, junto con agujeros específicos. La altura utilizada en el boceto fue de 45 mm, y se realizó un corte cilíndrico con un diámetro de 15 mm en la parte central. A continuación, se realizó una extrusión simétrica con una longitud de 30 mm, y posteriormente se añadió una extensión adicional de 70 mm con otro agujero de 15 mm de diámetro. El ensamblaje final se completó con la inclusión de dos cilindros que actúan como conectores o soportes, ubicados en puntos clave para mejorar la estabilidad de la estructura.

<p align="center">
  <img src="https://github.com/JefHuiza/Proyectos_de_Ingenieria/blob/main/Entregables/Entregable_6/Imagenes/Ejemplo_Onshape.png?raw=true" width="70%">
</p>

Para el análisis de esfuerzos, se definió una malla con un refinamiento local, estableciendo un tamaño máximo del elemento de malla de 0,001 m. 

<p align="center">
  <img src="https://github.com/JefHuiza/Proyectos_de_Ingenieria/blob/main/Entregables/Entregable_6/Imagenes/Ejemplo_Fuerzas.png?raw=true" width="70%">
</p>

Luego se realizó una simulación de análisis estático para evaluar la distribución de los esfuerzos en la pieza ensamblada. 

<p align="center">
  <img src="https://github.com/JefHuiza/Proyectos_de_Ingenieria/blob/main/Entregables/Entregable_6/Imagenes/Ejemplo_Modelo_Mecanico.png?raw=true" width="70%">
</p>

## 3.Resultados

Los resultados se analizaron mediante la magnitud de los esfuerzos de Cauchy y el desplazamiento en el eje Z, Los resultados mostraron que las áreas con mayor concentración de esfuerzos se encontraban cerca de los agujeros y las interfaces de los cilindros conectores, que eran los puntos de carga principales.
La escala de colores indicó que los esfuerzos máximos alcanzaban hasta 1,7984e+06 Pa (indicado en rojo), mientras que las áreas con menor tensión estaban representadas en tonos azules. Estas áreas de menor tensión sugieren una distribución uniforme de la carga en la parte central del cuerpo. Asi mismo , se obtuvo un análisis de desplazamiento en el eje Z para verificar las deformaciones bajo las condiciones de carga aplicadas.
Los resultados mostraron que las áreas cercanas a los conectores y las esquinas de la pieza experimentaron mayores desplazamientos, alcanzando valores de hasta 2.1109e-7 m. Esto se representó mediante una escala de colores que varió desde el rojo (mayor desplazamiento) hasta el azul (menor desplazamiento), indicando que la mayor deformación ocurrió en las zonas donde los conectores estaban sometidos a la carga.

## 4.Discuciones 

De acuerdo a la simulación de esfuerzos de Von Mises, los resultados muestran una concentración significativa de tensiones en la parte central de nuestro modelo. Aunque los esfuerzos son elevados en el centroide,  estos no generan sobre estiramiento en nuestro modelo, lo que nos indica que se puede soportar una carga aplicada sin deformación permanente.


## 5.Conclusiones


## 6.Referencias

[^1]: Safla, E. R. P., Arroba, S. M. A., Andrade, G. G. N., & Guevara, E. A. C. (2020).
Simulación de esfuerzos mecánicos sobre las férulas para miembros superiores.
*ConcienciaDigital, 3(1.2), 137-156.


[^2]: Victoria-Escamilla, M. G., Chávez Franco, S. H., Mendoza Rodríguez, Y. Y., Molina Gómez, J. N., & Sangerman-Jarquín, D. M. (2013). Diseño, fabricación y evaluación del prototipo de simulación de esfuerzos dinámicos en durazno (Prunus persica). *Revista mexicana de ciencias agrícolas, 4(6), 933-945.


[^3]: Monroy, H. A., & Godoy, L. A. (1999). Un sistema computacional para la simulación de interacción de defectos estructurales. *Mecánica Computacional, (17), 951-959.



