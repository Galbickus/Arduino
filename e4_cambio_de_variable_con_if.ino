int btn1 = 8;
int btn2 = 7;
int ledpin = 11;

int tiempo = 500;
int inc; 
int dec;

void setup() {
  
	pinMode(ledpin, OUTPUT);
	pinMode(btn1, INPUT);
	pinMode(btn2, INPUT);
	Serial.begin(9600);

}

void loop() {
  
	inc = digitalRead(btn1);
	dec = digitalRead(btn2); 
  
  
  if (inc == 1) {
    
    tiempo = tiempo + 50;
  
  }
  
  if (dec == 1) {
    
    tiempo = tiempo - 50;
  
  }
  
  
  if (tiempo < 0) {
    
    tiempo = 0;
    
  }

	Serial.println(tiempo); 

	digitalWrite(ledpin, HIGH);
	delay(tiempo);
	digitalWrite(ledpin, LOW);
	delay(tiempo);


}