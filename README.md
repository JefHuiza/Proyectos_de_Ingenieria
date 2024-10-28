**UNIVERSIDAD PERUANA CAYETANO HEREDIA**
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

>United Nations Web [^1]

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

<p align="center">
  <img src="https://github.com/user-attachments/assets/c8051963-c782-42e5-b6f0-ef91b6a44fc1" alt="imagen del sensor pH" width="250" style="display: block; margin: auto;" />
</p>

El electrodo de vidrio es el componente clave en la medición electrométrica del pH debido a su versatilidad y precisión, superando otros sistemas. Su funcionamiento fue descubierto accidentalmente por McInnes y Dole, quienes notaron la sensibilidad del vidrio a las variaciones de pH. Este electrodo utiliza un vidrio especial que permite el intercambio de iones entre la solución y el electrodo, generando un potencial eléctrico proporcional al pH. Este potencial se transmite mediante un alambre conductor hacia un amplificador, lo que facilita la medición del pH en soluciones acuosas.[^2]

<div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/c15f9b1a-fb0e-4f2a-a4e8-3785c8148e2d" alt="electrodo 1" width="250" style="display: block; margin: auto;" />
</div>

_Fig. 1. Membrana intercambiadora de iones de un electrodo de vidrio_

El pH se mide evaluando el potencial eléctrico generado por un electrodo, que luego se compara con el de un electrodo de referencia, el cual mantiene un potencial constante. El electrodo de referencia, comúnmente de calomel saturado en cloruro de potasio, actúa como un puente salino que facilita la medición. El método más utilizado actualmente es el electrodo de combinación, que integra el electrodo sensor y el de referencia en una sola unidad. Sin embargo, en la industria todavía se prefieren los electrodos separados para obtener señales más fiables y facilitar el mantenimiento.

<div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/fdb89657-dff9-4ae4-8802-c42d73712dd2" alt="funcionamiento 1" width="250" style="display: block; margin: auto;" />
</div>

_Fig. 2. Esquema de electrodo de calomel saturado y de vidrio_

[^2]: Ciganda, L. M., Quim, I., & Bussi, J. (2004). Electrodos para medir pH (Junio 2004). In _Monografía vinculada a la conferencia del Ing. Quim. Juan Bussi: “Biosensores para determinaciones analíticas”_, del (Vol. 20).

- Sensor de caudal de agua YS-201:

Dentro del sensor de caudal de agua YF-S201 esta presente una hélice que debe de entrar en contacto con el agua que esta fluyendo a través del sensor. Mediante la rotación de la hélice por el flujo del caudal de agua, se activara el sensor de efecto Hall y emitirá un pulso electromagnético. Este pulso electromagnético puede ser convertido  en litros de agua que pasa por el sensor mediante una formula (FORMULA).

<p align="center">
  <img src="https://theorycircuit.com/wp-content/uploads/2017/11/how-water-flow-sensor-works.png" alt="Sensor de caudal de agua" width="400px" />
</p>

El sensor de efecto Hall que utiliza el sensor es un sensor magnético que detecta la fuerza y dirección del campo magnético producido. 

<p align="center">
  <img src="https://github.com/JefHuiza/Proyectos_de_Ingenieria/blob/main/Entregables/Imagenes/Formula_caudal.png?raw=true" alt="Sensor de caudal de agua" width="400px" />
</p>

-  Sensor de turbidez TS-300B:

Posee un diodo infrarrojo y un fototransistor colocados de manera opuesta.La luz que capta el fototransistor se transforma en una señal de voltaje, la cual, tras aplicarle una curva de calibración, se convierte en unidades de turbidez. Así, es posible medir la absorción de luz causada por las partículas suspendidas o dispersas en el agua. Asi mismo, funciona con una alimentación de 5 voltios de corriente continua (DC), Consumo de corriente eléctrica de 30 miliamperios (mA), Rango de temperatura en el que puede operar, desde -30 grados Celsius hasta 80 grados Celsius. Rango de medición de turbidez, en unidades NTU (Nephelometric Turbidity Units). Es capaz de medir turbideces desde 0 (agua limpia) hasta 1000 NTU (agua muy turbia)

<p align="center">
  <img src="https://github.com/user-attachments/assets/d03827ca-bb05-44ae-a387-875165515b08" alt="Sensor Turbidez" width="300">
</p>
- Parámetro clave: La turbidez en unidades NTU  menor a 5

- Arduino como microcontrolador: Para conectar el sensor y adquirir datos en tiempo real.
  
- Curva de calibración: Necesario desarrollar una curva para relacionar el voltaje medido con las unidades de turbidez.
 
-  Turbidímetro comercial HACH 2100 Q: Para la comparación de datos obtenidos  del sensor de turbidez modelo
TS-300B.

- Cables de conexión. 

- módulo TSW-20M: Convierte la señal del sensor modelo TS-300B en señal de

- voltaje. A menor voltaje, mayor será la turbidez de la muestra.


 Flujo Conceptual
1. Entrada: Agua desalinizada después del proceso de destilación solar.
2. Medición: Sensor TS-300B mide la turbidez.
3. Validación: Arduino verifica si el valor de turbidez es < 5 NTU.
4. Salida:
   - Agua aceptable: Almacenamiento para uso humano.
   - Agua no aceptable: Redirigida para uso alternativo.
     
- Sensor de luz (BH1750)

</div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/c5fc26b8-d30d-4f5d-804e-d69d6749c4ec" alt="Sensor Turbidez" width="300">
</div>

_Figura 3. sensor de luz BH 1750_

El sensor BH1750 es un sensor de luz digital que mide la intensidad de la luz ambiente en lux. Se basa en un fotodiodo que convierte la luz en una corriente eléctrica, y utiliza un conversor analógico a digital (ADC) para ofrecer una lectura digital precisa a través de una interfaz I2C. 
Principio de Funcionamiento: Fotodiodo: El sensor utiliza un fotodiodo que convierte la luz en corriente eléctrica. Cuanta más luz incide en el fotodiodo, mayor es la corriente generada. 

Conversión Analógica a Digital: El BH1750 tiene un ADC integrado que convierte la señal analógica de corriente a un valor digital, que se mide en lux (unidad de medida de la iluminancia). Este valor es luego enviado al microcontrolador (por ejemplo, un Arduino) a través del protocolo I2C. 
Rango de Lectura: El BH1750 puede medir niveles de luz desde 0.11 lux hasta 100,000 lux, lo que lo hace útil en condiciones de poca o mucha iluminación, como interiores y exteriores.[^3]

</div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/6723bc22-7850-4065-91c7-e951c3d9b1e7" alt="Sensor Turbidez" width="300">
</div>

_Figura 4 Funcionamiento_

Tabla de guia de los valores de luz 
<p align="center">
  <img src="https://github.com/user-attachments/assets/19d4d94d-129a-45f2-8707-2d74bdb236a2" alt="Sensor Turbidez" width="300">
</p>
  
[^3]: Guerrero-Escobedo, A. E., Vásquez-Blas, C., Reyes-Lázaro, W., Wong-López, E. S., & Verde-Luján, H. E. (2022). Ensamblaje, calibración y puesta a prueba de sensor de turbidez de bajo costo para monitoreo de calidad de agua. QuanTUNAB, 1(2), e16. https://doi.org/10.52807/qunab.v1i2.16

- Sensor de conductividad TDS

El sensor de conductividad TDS funciona mediante la medición de la conductividad eléctrica del agua. Cuanta más salinidad tenga el agua, mayor será su conductividad. Hay dos métodos para realizar la medición: El método conductivo que usa electrodos que tiene contacto directo con el agua y el método inductivo que usa bobinas para crear un campo magnético. El método inductivo mide la conductividad sin tener contacto con el agua directamente, eso reduce problemas de corrosión y limpieza , haciéndolo ideal para un monitoreo porlogando.[^4]

<div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/da11b163-c9cf-4ce8-8c9d-19c59e127b7d" width="350" />
</div>

_Figura 5. Circuito eléctrico del sensor_

<div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/cc152ae4-ecb7-4d3b-9fd6-9f2c02c51d88" width="350" />
</div>

_Figura 6. Circuito eléctrico del sensor_

Desarrollando el cálculo de la inductancia mutua entre dos bobinas y la fuerza electromotriz (emf) inducida se tiene:

<div style="text-align: center;">
  <img src="https://github.com/user-attachments/assets/c33d6896-bf9d-4a40-bb96-0fd1d6d53ff6" width="350" />
</div>

[^4]:Parra, L., Sendra, S., Lloret, J., & Bosch, I. (2015). Development of a conductivity sensor for monitoring groundwater resources to optimize water management in smart city environments. Sensors, 15(9), 20990-21015.



Objetivo de TRL-2: 

- 1Funcionamiento general del sistema: El sistema de destilación solar dentro de una esfera transparente permitirá evaporar el agua de mar con la radiacíón solar. Los sensores mediran en tiempo real  los siguientes parametros clave: 
  
- 1 Producción de agua destilada:  Medición del flujo acumulado  y la cantidad total de agua acumulada
  
- 2 Radiación solar: Determinar cuanta eficiencia ha recibido la esfera, esto para evaluar la eficiencia de la 
- 4
- 5
- 6
- 7
- 8
- 9





















































**¡Gracias por ser parte de nuestro proyecto de desarrollo sostenible!**

# **Bibliografía**
[^1]:Naciones Unidas (2018), La Agenda 2030 y los Objetivos de Desarrollo Sostenible: una oportunidad para América Latina y el Caribe (LC/G.


