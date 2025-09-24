
// Arduino's pin connected to OUT pin of the sound sensor
#define SENSOR_PIN 5
#define INTERVAL 1000 // 1 second interval

unsigned long previousMillis = 0;
int lastState = HIGH;  // the previous state from the input pin
int currentState = A1;     // the current reading from the input pin
const int soundPin;
int LED = 6;
float referenceValue = 270.0; // Reference ADC value at a known dB level
float referenceDb = 80.0; // Known dB level corresponding to the

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the Arduino's pin as an input
  pinMode(SENSOR_PIN, INPUT);
  pinMode(LED_BUILTIN, OUTPUT); // Set built-in LED as output
}

void loop() {
  int dB =  currentState;
  unsigned long currentMillis = millis(); // Get current time in milliseconds
  // read the state of the the input pin:
  currentState = digitalRead(SENSOR_PIN);
    void measure();
}


