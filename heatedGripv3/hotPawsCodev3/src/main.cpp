#include <Arduino.h>

#define HEATON PIN_PB0
// Red
#define LED0 PIN_PA1
// Blue
#define LED1 PIN_PA2
// Green
#define LED2 PIN_PA3
#define BUTTON PIN_PA4
#define VOLTAGE PIN_PA5
#define LOWHEAT PIN_PA6
#define TEMP PIN_PA7

void buttonPress();

void setup() {
  // put your setup code here, to run once:
  analogReference(INTERNAL2V5);
  analogReadResolution(10);
  pinMode(HEATON, OUTPUT);
  digitalWrite(HEATON, LOW);
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  digitalWrite(LED0, HIGH);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(VOLTAGE, INPUT);
  pinMode(LOWHEAT, OUTPUT);
  digitalWrite(LOWHEAT, HIGH);
  pinMode(TEMP, INPUT);
  //attachInterrupt(BUTTON, buttonPress, RISING);
}
bool ledON = false;
float voltage = 0;
float realTemp = 0;
float targetTemp = 45;
void loop() {

//digitalWrite(HEATON, LOW);
//digitalWrite(LED0, LOW);
delay(200);
digitalWrite(HEATON, HIGH);
digitalWrite(LED0, HIGH);
digitalWrite(LOWHEAT, HIGH);
//voltage = 2.5f*(analogRead(TEMP)/1023.0);
//realTemp = 100.0*(voltage-0.5);

/*
  if(realTemp >= targetTemp){
    digitalWrite(HEATON, LOW);
    digitalWrite(LOWHEAT, LOW);
    digitalWrite(LED0, HIGH);
  }else{
    digitalWrite(LED0, LOW);
    digitalWrite(HEATON, HIGH);
    digitalWrite(LOWHEAT, HIGH);
  }
  */
delay(5000);
}

