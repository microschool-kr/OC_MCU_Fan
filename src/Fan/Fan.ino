// Code to control Fan speed via PWM

int fanPin = 6;

void setup() {
   pinMode(fanPin, OUTPUT);
}

void loop() {
   //Fan off
   analogWrite(fanPin, 0);
   delay(3000);

   //Medium speed
   analogWrite(fanPin, 150);
   delay(3000);

   //Max speed
   analogWrite(fanPin, 255);
   delay(3000);
}
