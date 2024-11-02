const int LED_VERDE = 11;
const int LED_AZUL = 12;
const int LED_AMARILLO = 10;
int estadoBoton = 0;
int contador = 0;
int reset = 0;

void setup() {
  
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(8, INPUT);
  pinMode(4, INPUT);
  
  Serial.begin(9600);
  
}

void loop() {
  
  estadoBoton = digitalRead(8);
  
  if (estadoBoton == HIGH) {
    
    contador = contador + 1;
    
    delay(200);
    
    Serial.println(contador);
    
  }
  
    while (contador == 3){
    
    digitalWrite(LED_VERDE, HIGH);
    delay(500);
    digitalWrite(LED_VERDE, LOW);
    delay(500);
      
      reset = digitalRead(4);
     
      if (reset == HIGH) {
        
        contador = 0;
      }
      
      Serial.println(contador);
  }
    
  
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AZUL, HIGH);
  digitalWrite(LED_AMARILLO, HIGH);
  delay(300);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AZUL, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  delay(300);
  
  
}