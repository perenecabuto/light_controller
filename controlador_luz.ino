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

        switch(msg) {
            case 'A':
                Serial.write("A!!!");
                mySwitch.send(9221160, 24);
                break;

            case 'B':
                Serial.write("B!!!");
                mySwitch.send(9221156, 24);
                break;

            case 'C':
                Serial.write("C!!!");
                mySwitch.send(9221153, 24);
                break;

            case 'D':
                Serial.write("D!!!");
                mySwitch.send(9221154, 24);
                break;
        }
    }
}
