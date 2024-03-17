#include <BleMouse.h>
BleMouse bleMouse;
int up = 14;
int down = 26;
void setup() {
  pinMode(up,INPUT_PULLUP);
  pinMode(down,INPUT_PULLUP);
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Starting");
  bleMouse.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
if(bleMouse.isConnected()){
  Serial.println("scrooling down");
  int value1 = digitalRead(up);
  int value2 = digitalRead(down);
  if(value1==0){
    bleMouse.move(0,0,1);
    delay(200);
  }
  if(value2==0){
    bleMouse.move(0,0,-1);
    delay(200);
  }
  
    
}
//delay(1000);
}
