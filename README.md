# **UNIVERSIDAD PERUANA CAYETANO HEREDIA**
# **PROYECTOS DE INGENERIA**


**Bienvenido al repositorio del Grupo 2 del curso Proyectos de Ingeneria**
# **INTRODUCCIÓN**
*En este repositorio se subirán todos los entregables e informes que se iran trabajando durante el curso.*

*El acceso al agua potable es un problema global crítico por ello estamos interesados en desarrollar e implementar un destilador solar económico y eficiente*

"PROYECTO DESTILADOR SOLAR"

En la actualidad, uno de los problemas más críticos a nivel mundial es el acceso universal al agua potable  y al agua libre de contaminantes para el riego de cultivos. Este artículo presenta la adaptación de un método innovador de desalinización de agua de océano,  un dispositivo de bajo costo que emplea la destilación solar  para la obtención de agua baja en sales, que puede ser empleada tanto para consumo humano como para la agricultura, según la calidad del mismo. El dispositivo se basa en un  diseño esférico con una alta eficiencia en el proceso de desalinización, obteniendo datos prometedores para los parámetros de conductividad, pH,  dureza total y turbidez. Para validar la metodología, los parámetros caracterizados del agua obtenida, se compararon con los Estándares de Calidad Ambiental (ECA) para agua, dando como primer resultado, una empleabilidad del agua para uso agrícola. 


## **Integrantes:**
- Joaquin Felipe Carpio Peralta
- Jeferson Juvenal Huiza Quispe
- Cristian Nelson Lima Huamani
- Zuly Manyahuillca Borda
- Jordan Andre Nieves Sulca 

**OBJETIVOS DE DESARROLLO SOSTENIBLE**
<p align="center">
  <img src="https://github.com/user-attachments/assets/ef3ad11d-1da3-46ae-bb1c-2b513f35e2d1" alt="Imagen 1" width="200px" />
  <img src="https://github.com/user-attachments/assets/fd9a81b6-900a-44ea-9644-73f6422a9856" alt="Imagen 2" width="200px" />
  <img src="https://github.com/user-attachments/assets/94e057c3-785a-41a0-b661-d82e6e900cfa" alt="Imagen 3" width="200px" />
</p>

>United Nations Web

## **Definicion de las ODS:**
- ODS 6:Busca garantizar la disponibilidad y la gestión sostenible del agua y el saneamiento para todos.
- ODS 7:Busca garantizar el acceso a una energía limpia y asequible, clave para el desarrollo de la agricultura, las empresas,etc.
- ODS 11:Pretende lograr que las ciudades y los asentamientos humanos sean inclusivos, seguros, resilientes y sostenibles.

## **OBJETIVO:**
Desarrollar y validar un destilador solar de bajo costo para producir agua potable y agrícola a partir de agua de océano.
<p align="center">
<img src="https://github.com/user-attachments/assets/cffd39e8-b249-4698-b3f7-9a9d41670421" alt="Imagen 1" width="300px" />
</p>

# **TRL-1: Funcionamiento de los sensores**

- Sonda y controlador de pH (5V)

<div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/c8051963-c782-42e5-b6f0-ef91b6a44fc1" alt="imagen del sensor pH" width="250" />
</div>

Principio de funcionamiento de un sensor de pH:

El electrodo de vidrio es el componente clave en la medición electrométrica del pH debido a su versatilidad y precisión, superando otros sistemas. Su funcionamiento fue descubierto accidentalmente por McInnes y Dole, quienes notaron la sensibilidad del vidrio a las variaciones de pH. Este electrodo utiliza un vidrio especial que permite el intercambio de iones entre la solución y el electrodo, generando un potencial eléctrico proporcional al pH. Este potencial se transmite mediante un alambre conductor hacia un amplificador, lo que facilita la medición del pH en soluciones acuosas.[^1]

<div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/c15f9b1a-fb0e-4f2a-a4e8-3785c8148e2d" alt="electrodo 1" width="250" />
</div>

_Fig. 1. Membrana intercambiadora de iones de un electrodo de vidrio_

El pH se mide evaluando el potencial eléctrico generado por un electrodo, que luego se compara con el de un electrodo de referencia, el cual mantiene un potencial constante. El electrodo de referencia, comúnmente de calomel saturado en cloruro de potasio, actúa como un puente salino que facilita la medición. El método más utilizado actualmente es el electrodo de combinación, que integra el electrodo sensor y el de referencia en una sola unidad. Sin embargo, en la industria todavía se prefieren los electrodos separados para obtener señales más fiables y facilitar el mantenimiento.

<div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/fdb89657-dff9-4ae4-8802-c42d73712dd2" alt="funcionamiento 1" width="250" />
</div>

_Fig. 2. Esquema de electrodo de calomel saturado y de vidrio_


[^1]: Ciganda, L. M., Quim, I., & Bussi, J. (2004). Electrodos para medir pH (Junio 2004). In _Monografía vinculada a la conferencia del Ing. Quim. Juan Bussi: “Biosensores para determinaciones analíticas”_, del (Vol. 20).


Sensor de caudal de agua YS-201:

- Medición de  calidad del agua desalinizada  con arduino

Componentes utilizados:
-  Sensor de turbidez (TS-300B): Costa de un  diodo infrarrojo y un fototransistor posisionados uno en frente de otro.La luz detectada por el
fototransistor es traducida en señal de voltaje que, mediante una curva de calibración, se convierte
matemáticamente en unidades de turbidez. De esta forma se detecta el grado de absorción de la luz
por las partículas sus-pendidas o sólidos totales disueltos

<p align="center">
  <img src="https://github.com/user-attachments/assets/d03827ca-bb05-44ae-a387-875165515b08" alt="Sensor Turbidez" width="600">
</p>



- Microcontrador arduino: Para conectar el sensor y adquirir datos en tiempo real.  
- Cables de conexión
- módulo  TSW-20M: convierte la señal del sensor modelo TS-300B en señal de
voltaje. A menor voltaje, mayor será la turbidez de la muestra.

- Flujo conceptual:
-  Entrada: Agua desalinizada después del proceso de destilación
   Medición: Sensor TS-300B mide la turbidez
   Validación: Arduino verifica si el valor de turbidez es < 5 NTU
- Salida:
- Agua aceptable: Almacenamiento para uso humano.
  Agua no aceptable: Redirigida para uso alternativo
  
Guerrero-Escobedo, A. E., Vásquez-Blas, C., Reyes-Lázaro, W., Wong-López, E. S., & Verde-Luján, H. E. (2022). Ensamblaje, calibración y puesta a prueba de sensor de turbidez de bajo costo para monitoreo de calidad de agua. QuanTUNAB, 1(2), e16. https://doi.org/10.52807/qunab.v1i2.16


Sensor de conductividad TDS

Principio de Funcionamiento:

El sensor de conductividad TDS funciona mediante la medición de la conductividad eléctrica del agua. Cuanta más salinidad tenga el agua, mayor será su conductividad. Hay dos métodos para realizar la medición: El método conductivo que usa electrodos que tiene contacto directo con el agua y el método inductivo que usa bobinas para crear un campo magnético. El método inductivo mide la conductividad sin tener contacto con el agua directamente, eso reduce problemas de corrosión y limpieza , haciéndolo ideal para un monitoreo porlogando.

<div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/da11b163-c9cf-4ce8-8c9d-19c59e127b7d" width="350" />
</div>

Figura 2. Circuito eléctrico del sensor

<div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/cc152ae4-ecb7-4d3b-9fd6-9f2c02c51d88" width="350" />
</div>

Figura 3. Circuito eléctrico del sensor

Desarrollando el cálculo de la inductancia mutua entre dos bobinas y la fuerza electromotriz (emf) inducida se tiene:

<div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/c33d6896-bf9d-4a40-bb96-0fd1d6d53ff6" width="350" />
</div>

Parra, L., Sendra, S., Lloret, J., & Bosch, I. (2015). Development of a conductivity sensor for monitoring groundwater resources to optimize water management in smart city environments. Sensors, 15(9), 20990-21015.


# **Bibliografía**
  - ODS 6 Agua limpia y saneamiento . (2021, 11 de octubre). Pacto Mundial. https://www.pactomundial.org/ods/6-agua-limpia-y-saneamiento/
  - 7. Energía asequible y no contaminante . (s/f). Agenda2030lac.org. Recuperado el 1 de septiembre de 2024, de https://agenda2030lac.org/es/ods/7-energia-asequible-y-no-contaminante
  - ODS 11 Ciudades y comunidades sostenibles | Pacto Mundial ONU. (2024, 1 agosto). Pacto Mundial. https://www.pactomundial.org/ods/11-ciudades-y-comunidades-sostenibles/


**¡Gracias por ser parte de nuestro proyecto de desarrollo sostenible!**
