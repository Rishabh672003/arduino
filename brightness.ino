void setup(){
  pinMode(7,OUTPUT);
}

void loop(){
  int i = 0;
  while(i<=255){
    analogWrite(7,i);
    delay(500);
    i = i+1;
  }
}
