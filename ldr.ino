const int ledPin = 13;
const int ldrPin=A0;

void setup(){
  serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
}

void loop(){
  int ldrStatus= analogRead(13);
  if(ldrStatus<=200){
    digitalWrite(13,HIGH);
    Serial.print("Its Dark, Turn on the Led:");
    Serial.print(ldrStatus);
  }
  else{
    digitalWrite(ledPin,LOW);
    Serial.print("Its bright, Turn off the Led:");
    Serial.print(ldrStatus);
  }
}
