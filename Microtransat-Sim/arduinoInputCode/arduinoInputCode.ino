void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorvalue = map(sensorValue, 0, 1023, 180, -180);
  int sensorvalue2 = map(sensorValue2, 0, 1023, -180, 180);
  Serial.print("sail");
  Serial.println(sensorvalue);
  Serial.print("rudder");
  Serial.println(sensorvalue2);
  delay(50);
}
