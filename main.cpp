const int led = 13;
const int sensorPin = 2;
int i = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); // initialise the serial communication

  pinMode(sensorPin, INPUT);
  pinMode(led, OUTPUT);

  // this helps with the sensor to calibate for 60 seconds
  for(i = 0; i <= 30; i++){
    digitalWtrite(led, HIGH);
    delay(1000);
    digitalWtrite(led, LOW);
    delay(1000);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sensorPin) == HIGH){
    digitalWtrite(led, HIGH);
    Serial.println("ON");
    delay(1000);
  } else {
    digitalWtrite(led, LOW);
    Serial.println("LOW");
  }
}
