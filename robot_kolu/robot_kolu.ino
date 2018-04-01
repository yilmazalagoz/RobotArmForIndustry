#include <Servo.h>

byte hiz=10;

Servo govdeMotor,kolMotor,dirsekMotor,tirnakMotor;

void servoPinArasiBaglanti() {
  govdeMotor.attach(3, 1000, 2000);
  kolMotor.attach(5, 1000, 2000);
  dirsekMotor.attach(6, 1000, 2000);
  tirnakMotor.attach(9, 1000, 2000);  
}

void ilkKalibrasyon(){
  govdeMotor.write(90);
  kolMotor.write(90);
  dirsekMotor.write(90);
  tirnakMotor.write(90);
}

void setup() {
  servoPinArasiBaglanti();
  ilkKalibrasyon();
}

void servoHareketEt(byte ilkDeger, byte sonDeger, Servo servo){
  if(ilkDeger < sonDeger){
     for(byte derece = ilkDeger; derece <= sonDeger; derece++){
      servo.write(derece);
      delay(hiz); 
     }
  }else if(ilkDeger > sonDeger){
     for(byte derece = ilkDeger; derece >= sonDeger; derece--){
      servo.write(derece);
      delay(hiz); 
     }
  } 
    
}
  
void loop() {
  
  kalibreEt(90,175);
  
  //ileri yönde hareket
  servoHareketEt(90,175,govdeMotor);
  servoHareketEt(170,5,kolMotor);
  servoHareketEt(90,35,dirsekMotor);
  servoHareketEt(90,175,tirnakMotor);
  servoHareketEt(5,170,kolMotor);
  servoHareketEt(175,5,govdeMotor);
  
  
  //geri yönde hareket
  servoHareketEt(170,5,kolMotor);
  servoHareketEt(35,90,dirsekMotor);
  servoHareketEt(175,90,tirnakMotor);
  servoHareketEt(5,170,kolMotor);
  servoHareketEt(5,90,govdeMotor);
}

byte kalibreEt(byte ilkDeger, byte sonDeger){
  
}
