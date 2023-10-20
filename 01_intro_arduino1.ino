// C++ code
// Autor Ing. Yerman Avila
// Introducción Arduino
// Lectura Entrada digital
// Escritura Salida digital

void setup()
{
  // pinMode(LED_BUILTIN, OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(11,INPUT);
}

void loop()
{
  bool A;
  A=digitalRead(11);
  digitalWrite(7, A);
}