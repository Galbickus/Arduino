
void setup() {
  
  Serial.begin(9600);
  
}

void loop() {
  
  Serial.println("Empieza otra vez el ciclo for");
  
  for (int i = 0; i <= 10; i++) {
    
    Serial.println(i);
    delay(500);
    
  }
  
  Serial.println("Termino el ciclo for");
  
  delay(5000);
}
