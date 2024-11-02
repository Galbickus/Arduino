int led = 11;

int boton = 8;
int estadoBoton = 0;

int estado = 0;

void setup() {
  
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);
  
}


void loop() {
  
  estadoBoton = digitalRead(boton);
  
  if (estadoBoton == 1) {
    
    digitalWrite(led, !digitalRead(led));
    
    delay(200);
    
  }
   
  
}