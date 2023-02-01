// needs dervo library
#include <Servo.h>

Servo myservo;
int pos = 0;
void setup(){
  myservo.attach(3);
}

void loop(){
  for(pos = 0; pos<=45;pos++){
    myservo.write(pos);
    delay(15);
  }
  for(pos = 0; pos>=0;pos--){
    myservo.write(pos);
    delay(40);
  }
}
