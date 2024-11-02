#include <Servo.h>   

Servo myServo;  // Crea un objeto Servo para controlar el servo

void setup() {
  myServo.attach(9);  // Asocia el servo motor al pin digital 9.
}

void loop() {
  int valorPote = analogRead(A0);  // Lee el valor del potenciómetro (0 a 1023)
  int angulo = map(valorPote, 0, 1023, 0, 180);  // Convierte el valor a un ángulo (0 a 180 grados)

  myServo.write(angulo);  // Mueve el servo al ángulo especificado

  delay(15);  // Espera un poco para permitir que el servo se mueva
}
