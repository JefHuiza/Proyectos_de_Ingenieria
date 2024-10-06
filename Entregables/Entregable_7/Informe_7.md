<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

# Modelo PCB

## 1. Explicación de los componentes:

Debido al constante uso de sensores que deben de estar en cuerpos de agua, no se puede conectar directamente con el PCB del Arduino por lo que para que estos sigan conectados al PCB, se emplearan el uso de molex de diferentes pines para cada uno de los sensores a utilizar esten conectados al PCB mediante jumpers.

Se utilizo un PCB con forma de Arduino UNO como se estarán utilizando uno para registrar los datos que lo sensores están tomando y que funcione como tapa de este. Cada sensor tiene un pin respectivo de donde se estarán registrando los datos.

- Pin A0 para el sensor de dureza
- Pin A1 para el sensor de pH
- Pines A2 y A3 para el sensor de luz
- Pin A5 para el sensor de turbidez
- Pin D9 para el sensor de flujo de agua

Todos los sensores están conectados mediante cables en la capa suferior e inferior del PCB. Además de ello, en busca de no utilizar una gran cantidad de cables, los pines de los sensores que necesitan 5V y GND fueron conectados entre si para que la presentación del PCB sea más compacta.

Se hicieron perforaciones en las esquinas del PCB para que una vez conectado con el Arduino, este se pueda conectar a una superficie y no este en movimiento, desajustando las conexiones realizadas.

Finalmente, se le agrego a la superficie inferior del PCB la malla tierra para eliminar posibles señales interferentes como el ruido al equipo.
