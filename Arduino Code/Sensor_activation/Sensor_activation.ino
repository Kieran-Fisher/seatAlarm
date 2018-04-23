#include <math.h>

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = false;  // variable to store the value coming from the sensor


void setup(){
  Serial.begin(9600);//initialize the serial monitor at 9600 baud rate
      // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  if(sensorValue >= 100){
    sensorValue = true;
    }
}

void loop(){
  int sensorValue=analogRead(sensorPin);//create a var to store the value of the sensor
  Serial.println("the analog read data is ");//print on the serial monitor what's in the ""
  Serial.println(sensorValue);// print the value of the sensor on the serial monitor
  delay(1000);
    // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
  
}
