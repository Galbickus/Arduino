int boton = 8;
int estadoBoton = 0;

int estado = 0;

int led = 11;

void setup() {
  
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT); 
  
}

void loop() {
  
  estadoBoton = digitalRead(boton);
  
  if (estadoBoton == 1) {
    
    estado = !estado;
    
    delay(500);


  } 
  
  	digitalWrite(led, estado);
    delay(300);
    digitalWrite(led, LOW);
    delay(300);
  
}
