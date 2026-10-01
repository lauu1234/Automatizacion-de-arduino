
# Automatizacion de arduino
roblemática

Muchas veces las plantas no reciben la cantidad de agua necesaria porque las personas se olvidan de regarlas o no saben cuándo la tierra está demasiado seca. Solución propuesta

Crear un que mida la humedad de la tierra y active una bomba de agua cuando el suelo esté demasiado seco. Objetivo

Automatizar el riego de una planta para mantener una humedad adecuada y evitar que se seque por falta de agua.

## Codigo
const int sensorHumedad = A0;
const int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

 
  int valor = analogRead(sensorHumedad);


  int humedad = map(valor, 0, 1023, 0, 100);


  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.println("%");

 if (humedad > 60)  {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }

  delay(500);
}s
