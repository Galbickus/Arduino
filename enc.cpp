int boton = 8;
int estadoBoton = 0;
int led = 11;

void setup() {
  
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT); 
  
}

void loop() {
  
  estadoBoton = digitalRead(boton);
  
  if (estadoBoton == 1) {
    
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(300);
    
  } else {
    
    digitalWrite(led, LOW);
  
  }
  
}