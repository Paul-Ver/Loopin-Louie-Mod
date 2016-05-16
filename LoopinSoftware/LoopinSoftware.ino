const unsigned char motorPin = 0;
const unsigend char unconnectedPin = 1;

void setup() {
  pinMode(motorPin,OUTPUT);
  randomSeed(analogRead(unconnectedPin));//Seed the random, so the pattern will be different every time!
}

void loop() {
  analogWrite(motorPin,random(50,255));//Set the speed to something random.
  delay(random(50,255));//Wait for a random time.
}
