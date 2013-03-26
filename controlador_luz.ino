#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {
  Serial.begin(9600);
  
  mySwitch.enableTransmit(10);
  mySwitch.setPulseLength(297);
  //mySwitch.setProtocol(1);
  //mySwitch.setRepeatTransmit(15);
}

void loop() {

  while (Serial.available()) {
    char msg = Serial.read();
    if (msg == 'A') {
      Serial.write("A!!!");
      mySwitch.send(9221160, 24);      
    }
    else if (msg == 'B') {
      Serial.write("B!!!");
      mySwitch.send(9221156, 24);
    }
    else if (msg == 'C') {
      Serial.write("C!!!");
      mySwitch.send(9221153, 24);      
    }
    else if (msg == 'D') {
      Serial.write("D!!!");
      mySwitch.send(9221154, 24);
    }
  }
 

}
