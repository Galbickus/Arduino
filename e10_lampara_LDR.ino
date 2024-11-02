int rele = 11; 
int Sensor = 0;

void setup() {
  
  pinMode(rele, OUTPUT);
  Serial.begin(9600);
      
}



void loop() {
  
  Sensor = analogRead(0);
  Serial.println(Sensor);

  
  if (Sensor > 915) {
    
    digitalWrite(rele, HIGH);
    
  } else {
    
    digitalWrite(rele, LOW);
  }

  delay(300);
    
}