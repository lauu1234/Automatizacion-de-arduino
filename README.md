
# Automatizacion de arduino
problemática

Muchas veces las plantas no reciben la cantidad de agua necesaria porque las personas se olvidan de regarlas o no saben cuándo la tierra está demasiado seca. Solución propuesta

Crear un que mida la humedad de la tierra y active una bomba de agua cuando el suelo esté demasiado seco. Objetivo

Automatizar el riego de una planta para mantener una humedad adecuada y evitar que se seque por falta de agua.

## Codigo

int potenciometro = A0;
int led = 8;
int valor;
int brillo;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  valor = analogRead(potenciometro);
  brillo = map(valor, 0, 1023, 0, 255);
  analogWrite(led, brillo);
}

# Productos
Arduino UNO R3 SMD (CH340G) + usb : 11.329,49
MH10CM pack 40 cables dupont macho-hembra/10cm: 3.100
LED Difusa 5mm x 10 unidades por color :1.950,51
potenciometro: prestado
