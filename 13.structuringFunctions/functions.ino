  void measure();
  int sensorValue = analogRead(currentState);
  float decibels = (10 * log10(sensorValue / referenceValue)) + referenceDb;

    Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print(" | Decibels: ");
   Serial.println(decibels);

  delay(100);