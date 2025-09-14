
// Arduino's pin connected to OUT pin of the sound sensor
#define SENSOR_PIN 5
#include <U8g2lib.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Initialize LCD


U8G2_SSD1306_128X64_NONAME_F_HW_I2C OLED(U8G2_R0, SCL, SDA, U8X8_PIN_NONE);

int lastState = HIGH;  // the previous state from the input pin
int currentState;      // the current reading from the input pin

const int soundPin = A0;

int LED = 6;
int maxVal = 0, minVal = 1023;


void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the Arduino's pin as an input
  pinMode(SENSOR_PIN, INPUT);
  pinMode(LED, OUTPUT);
  lcd.begin();
  lcd.print("Sound Level:");
    OLED.clearBuffer();
  unsigned long range_in_cm = myUltraSonicSensor.distanceRead();

}

void loop() {
  // read the state of the the input pin:
  currentState = digitalRead(SENSOR_PIN);
  
  maxVal = 0;
minVal = 1023;

// Measure peak-to-peak amplitude
unsigned long startTime = millis();
while (millis() - startTime < 50) {
int val = analogRead(soundPin);
if (val > maxVal) maxVal = val;
if (val < minVal) minVal = val;
}

int amplitude = maxVal - minVal;
float decibel = map(amplitude, 0, 1023, 30, 120); // Example mapping

lcd.setCursor(0, 1);
lcd.print("dB: ");
lcd.print(decibel);



  if (lastState == HIGH && currentState == LOW)
    Serial.println("The sound has been detected");
    digitalWrite(LED, HIGH);
  if (lastState == LOW && currentState == HIGH)
    Serial.println("The sound has disappeared");

  // save the the last state
  lastState = currentState;
}





