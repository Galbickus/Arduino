const int LED_VERDE = 11;
int estadoBoton = 0;
int contador = 0;

void setup() {
  
  pinMode(LED_VERDE, OUTPUT);
  pinMode(8, INPUT);

  Serial.begin(9600);
  
}

void loop() {
  
  estadoBoton = digitalRead(8);
  
  if (estadoBoton == HIGH) {
    
    contador = contador + 1;
    
    delay(200);
    
    Serial.println(contador);
    
  }
  
  if (contador == 3){
    
    digitalWrite(LED_VERDE, HIGH);
    delay(400);
    digitalWrite(LED_VERDE, LOW);
    delay(400);
  }
  
}
