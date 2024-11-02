#include <Servo.h>  // Incluir la biblioteca Servo

const int pinEntrada = A0;    // Pin de entrada analógica
const int pinServoFiltrado = 9; // Pin de salida del servomotor para la señal filtrada
const int pinServoBruto = 10;   // Pin de salida del servomotor para la señal bruta
float alfa = 0.05;             // Factor de suavizado (0 < alfa <= 1)
float valorFiltrado = 0;      // Valor filtrado inicial

Servo servoFiltrado;  // Crear un objeto Servo para la señal filtrada
Servo servoBruto;     // Crear un objeto Servo para la señal bruta

void setup() {
  // Iniciar la comunicación serie a 9600 baudios
  Serial.begin(9600);
  // Vincular los servomotores a los pines especificados
  servoFiltrado.attach(pinServoFiltrado);
  servoBruto.attach(pinServoBruto);
}

void loop() {
  // Leer del sensor
  int valorBruto = analogRead(pinEntrada);
  
  // Aplicar el filtro de media móvil exponencial
  valorFiltrado = alfa * valorBruto + (1 - alfa) * valorFiltrado;

  // Convertir el valor filtrado a un rango adecuado para el servomotor (0 a 180 grados)
  int anguloFiltrado = map(valorFiltrado, 0, 1023, 0, 180);
  // Convertir el valor bruto a un rango adecuado para el servomotor (0 a 180 grados)
  int anguloBruto = map(valorBruto, 0, 1023, 0, 180);
  
  // Mover los servomotores a los ángulos calculados
  servoFiltrado.write(anguloFiltrado);
  servoBruto.write(anguloBruto);

  // Enviar la lectura original y la filtrada a la consola serie en el formato adecuado para el plotter
  Serial.print(valorBruto);
  Serial.print(",");
  Serial.println(valorFiltrado);

  // Esperar un poco antes de la siguiente lectura
  delay(100);
}
