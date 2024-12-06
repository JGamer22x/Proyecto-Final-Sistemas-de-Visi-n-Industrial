#include <LedControl.h>  // Biblioteca para controlar MAX7219

// Definir pines para la comunicación SPI con MAX7219
int DIN = 12;   // Pin de datos
int CS = 11;    // Pin de selección de chip
int CLK = 10;   // Pin de reloj

LedControl lc = LedControl(DIN, CLK, CS, 1); // Inicializa MAX7219 con un solo módulo

// Patrones para los números
byte number0[8] = {0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x00};  // Representación de 0
byte number1[8] = {0x10, 0x30, 0x10, 0x10, 0x10, 0x10, 0x7C, 0x00};  // Representación de 1
byte number2[8] = {0x3C, 0x42, 0x02, 0x0C, 0x30, 0x40, 0x7E, 0x00};  // Representación de 2

void setup() {
  lc.shutdown(0, false);     // Despierta el MAX7219
  lc.setIntensity(0, 8);     // Ajusta el brillo (0-15)
  lc.clearDisplay(0);        // Limpia la pantalla
  Serial.begin(9600);        // Inicializa comunicación serie
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();  // Leer el carácter recibido
    if (c == '0') {
      displayNumber(number0);
    } else if (c == '1') {
      displayNumber(number1);
    } else if (c == '2') {
      displayNumber(number2);
    }
  }
}

// Función para mostrar un número en la matriz
void displayNumber(byte number[]) {
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, number[i]);  // Envía una fila del patrón al MAX7219
  }
}


