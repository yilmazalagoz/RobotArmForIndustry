#include <Servo.h>
Servo govdemotor,kolmotor,dirsekmotor,tirnakmotor;
byte hiz=10;
void setup() {
govdemotor.attach(3, 1000, 2000);
kolmotor.attach(5, 1000, 2000);
dirsekmotor.attach(6, 1000, 2000);
tirnakmotor.attach(9, 1000, 2000);
govdemotor.write(90);
kolmotor.write(90);
dirsekmotor.write(90);
tirnakmotor.write(90);
}

void loop() {
  calibre(90,175);
 for(byte derece=90;derece<=175;derece++)
  {
govdemotor.write(derece);
delay(hiz);
  }
    for(byte derece=170;derece>=5;derece--)
  {
kolmotor.write(derece);
delay(hiz);
  }
    for(byte derece=5;derece<=170;derece++)
  {
kolmotor.write(derece);
delay(hiz);
  }
   for(byte derece=175;derece>=90;derece--)
  {
govdemotor.write(derece);
delay(hiz);
  }
 for(byte derece=90;derece>=70;derece--)
  {
dirsekmotor.write(derece);
delay(50);
  }
   for(byte derece=90;derece<=120;derece++)
  {
tirnakmotor.write(derece);
delay(50);
  }
}

byte calibre(byte basla, byte bitis)
{
  
}

