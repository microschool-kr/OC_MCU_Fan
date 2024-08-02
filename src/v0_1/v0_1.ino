// 핀 설정 
const int potPin = A0; // 아날로그 핀 A0에 연결
const int fanPin = 6; // 팬 제어 핀 6번에 연결

void setup() {
   //핀 모드 설정 
   pinMode(potPin, INPUT); // 아날로그 핀을 입력으로 설정
   pinMode(fanPin, OUTPUT); // 디지털 핀을 출력으로 설정

   // 시리얼 통신 시작
   Serial.begin(9600);
}

void loop() {
   // 가변 저항에서 값을 읽어옴(0~1023)
   int potValue = analogRead(potPin);

   // 팬 속도를 125~255로 변환
   int fanSpeed = map(potValue, 0, 1023, 0, 255);

   // 팬 속도를 시리얼 모니터에 출력
   Serial.print("Potentiometer: ");
   Serial.print(potValue);
   Serial.print(" , Fan Speed: ");
   Serial.println(fanSpeed);

   analogWrite(fanPin, fanSpeed); // 팬 속도 제어


   delay(100); // 0.1초 대기  




}
