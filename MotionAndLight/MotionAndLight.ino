int sensorPin = 0; // the sensor PIN
int lightPin = 1; // the toggle PIN
int sensorValue = 0; // the sensor Value

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT);
  digitalWrite(sensorPin, HIGH); //Pull down

  pinMode(lightPin, OUTPUT);
}

void loop() {  
  // put your main code here, to run repeatedly:
  delay(1000); 
  
  sensorValue = digitalRead(sensorPin);
  digitalWrite(lightPin, !sensorValue); 
  delay(sensorValue*4000); 
}
