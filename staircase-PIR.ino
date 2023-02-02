int state = LOW;

void setup(){
  pinMode(2,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int val = digitalRead(2);
  if(val = HIGH){
    digitalWrite(9,HIGH);
    delay(500);
    if(state = LOW){
      Serial.print("Motion detected");
      state = HIGH;
    }
  }
  else{
    digitalWrite(9,LOW);
    delay(500);
    if(state = HIGH){
      Serial.print("Motion stopped");
      state = LOW;
    }
  }
}
