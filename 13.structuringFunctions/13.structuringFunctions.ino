
// Arduino's pin connected to OUT pin of the sound sensor
#define SENSOR_PIN 5
#define INTERVAL 1000 // 1 second interval

unsigned long previousMillis = 0;
int lastState = HIGH;  // the previous state from the input pin
int currentState;      // the current reading from the input pin
const int soundPin = A1;
int LED = 6;

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

  if (lastState == HIGH && currentState == LOW)
    Serial.println("The sound has been detected");
    buzzerStandby();
  else if (lastState == LOW && currentState == HIGH)
    Serial.println("The sound has disappeared");
    buzzerStandby()

}

  }


void buzzerStandby() {
  unsigned long currentMillis = millis();
  if (currentMillis - prevoiseMillis >= beepInterval) {

    previousMillis = currentMillis;
  }
}


