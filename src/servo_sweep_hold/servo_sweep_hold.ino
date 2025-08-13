#include <Servo.h>

const uint8_t PINS[4] = {3,5,6,9};
Servo s[4];

const uint16_t SWEEP_MS = 2000;
const uint8_t LO=0, HI=180;

void attachAll(){ for(int i=0;i<4;i++) s[i].attach(PINS[i]); }
void writeAll(uint8_t a){ for(int i=0;i<4;i++) s[i].write(a); }

void setup(){
  attachAll();
  writeAll(90);
  delay(300);
}

void loop(){
  uint32_t t0 = millis();
  int dir = 1;
  int a = LO;
  writeAll(a);
  while(millis()-t0 < SWEEP_MS){
    a += dir*4;
    if(a>=HI){a=HI;dir=-1;}
    if(a<=LO){a=LO;dir=1;}
    writeAll(a);
    delay(10);
  }
  writeAll(90);
  for(int i=0;i<200;i++){ writeAll(90); delay(50); }
}
