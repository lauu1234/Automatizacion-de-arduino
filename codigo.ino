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