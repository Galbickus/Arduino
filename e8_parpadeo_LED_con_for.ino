int parpadeos = 2;
int led = 11;

void setup() {
  
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  
  

  
  for (int i = 0; i < parpadeos; i++) {
    
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    
  }
  
  delay(4000);
  
  
}