
# Automatizacion de arduino
problemática

Muchas personas riegan sus plantas sin saber cuánta humedad tiene la tierra, lo que puede provocar que reciban demasiada o muy poca agua. Además, regarlas manualmente requiere tiempo y atención.

Para solucionar este problema, se propone crear un sistema de riego automático con un sensor de humedad, un potenciómetro y Arduino. El sensor mide la humedad de la tierra, mientras que el potenciómetro permite regular el nivel de humedad deseado. Cuando la tierra está demasiado seca, Arduino activa una bomba de agua y, cuando alcanza el nivel establecido, la apaga.

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

# Elementos 
Arduino UNO R3 SMD (CH340G) + usb : 11.329,49

MH10CM pack 40 cables dupont macho-hembra/10cm: 3.100

LED Difusa 5mm x 10 unidades por color :1.950,51

potenciometro: prestado
