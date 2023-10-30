// Lectura de valor entero por medio de monitor serie
// Asigna valor leído a tiempo de parpadeo LED interno
// Uso didáctico, reemplace parámetros genéricos de BaudRate y pines por los de su placa
// Autor: Ing. Yerman Avila. 

//Variables globales
int T=500; //Tiempo por defecto 0.5 s  

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);  //Baudios para Wemos Lollin D1 mini
  }

void loop() {

//Lectura monitor serie, usuario indica tiempo de parpadeo en ms
  if (Serial.available()) {
    T = Serial.parseInt(); 
    if (Serial.read() == '\n') { 
      Serial.print("Tiempo recibido: ");
      Serial.println(T);
    }
  }
//Blink básico + control de tiempo de parpadeo
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(T);                     
  digitalWrite(LED_BUILTIN, LOW);   
  delay(T);  
}
