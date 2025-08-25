/*
  Author:

  Learning Intention:
  The students will learn how to connect and control a servo motor.

  Success Criteria:
    1.  I understand how to connect the servo motor
    2.  I can manually write different degrees of movement to the servo
    3.  I can map a potentiometer to a servo and control its movement
    4.  I understand that a 180deg servo angle of movement is set by a
        frequency signal sent from the microcontroller

  Student Notes: 

  Documentation:
    https://www.sparkfun.com/servos
    https://github.com/arduino-libraries/Servo <-- We are still using this library

  Schematic:
    https://www.tinkercad.com/things/lQ9RyYJRoLn?sharecode=MKlN0A7R0WGodkdTRKkPJO7I8PeI5L_GCR7pCclQ0qM
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/10.servoMotor/Bootcamp-servoMotor.png
*/
//Includes or OLED screen
#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>
#include <Wire.h>

#include <Servo.h>

#include "Ultrasonic.h"
Ultrasonic myUltraSonicSensor(5);

unsigned static int servoPin = 6;

Servo myservo;

int val;
int potpin = A1;


void setup() {
  myservo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {

  unsigned long RangeInCentimeters;
  RangeInCentimeters = myUltraSonicSensor.distanceRead();
  val = map(RangeInCentimeters,0, 30, 0, 180);
  myservo.write(val);
  delay(15);

  Serial.print(RangeInCentimeters);
  Serial.println(" cm");
  delay(250);
}