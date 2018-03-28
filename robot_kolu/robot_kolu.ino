#include <Servo.h>

byte hiz=10;
Servo servoParts[] = {bodyMotor,armMotor,elbowMotor,gripperMotor};
void attachParts() {
  bodyMotor.attach(3, 1000, 2000);
  armMotor.attach(5, 1000, 2000);
  elbowMotor.attach(6, 1000, 2000);
  gripperMotor.attach(9, 1000, 2000);  
}

void 

void setup() {

  attachParts()
  
  bodyMotor.write(90);
  armMotor.write(90);
  elbowMotor.write(90);
  gripperMotor.write(90);
}
void loop() {
 calibre(90,175);
  for(byte derece=90;derece<=175;derece++){
    bodyMotor.write(derece);
    delay(hiz);
  }
  for(byte derece=170;derece>=5;derece--){
    armMotor.write(derece);
    delay(hiz);
  }
  for(byte derece=90;derece>=35;derece--){
    elbowMotor.write(derece);
    delay(hiz);
  }
  for(byte derece=90;derece<=175;derece++){
    tirnakmotor.write(derece);
    delay(hiz);
  }
  for(byte derece=5;derece<=170;derece++){
    armMotor.write(derece);
    delay(hiz);
  }
  for(byte derece=175;derece>=5;derece--){
    bodyMotor.write(derece);
    delay(hiz);
  }
  //masaya birakmak için
  for(byte derece=170;derece>=5;derece--){
    armMotor.write(derece);
    delay(hiz);
  }
  for(byte derece=35;derece<=90;derece++){
    elbowMotor.write(derece);
    delay(hiz);
  }
  for(byte derece=175;derece>=90;derece--){
    tirnakmotor.write(derece);
    delay(hiz);
  }
  for(byte derece=5;derece<=170;derece++){
    armMotor.write(derece);
    delay(hiz);
  }
  
  for(byte derece=5;derece<=90;derece++){
    bodyMotor.write(derece);
    delay(hiz);
  }
}

byte calibre(byte basla, byte bitis){
  
}

