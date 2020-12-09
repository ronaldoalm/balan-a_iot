#include "HX711.h"
 
#define DT A1
#define SCK A0
 
HX711 escala;

void setup() {
escala.begin (DT, SCK);
Serial.begin(9600);
Serial.print("Leitura do Valor ADC:  ");
Serial.println(escala.read());
Serial.println("Nao coloque nada na balanca!");
Serial.println("Iniciando...");
escala.set_scale(134796.9);
escala.tare(20);
Serial.println("Insira o item para Pesar");
}
 
void loop() {
Serial.print("Peso: ");
Serial.print(escala.get_units(20), 3);
Serial.println(" kg  ");
delay(1000);}
