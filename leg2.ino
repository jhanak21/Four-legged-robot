
#include <Servo.h> 
Servo myservo1;  // create servo object to control a servo 
Servo myservo2;
Servo myservo3;
Servo myservo4;// twelve servo objects can be created on most boards
Servo myservo5;  // create servo object to control a servo 
Servo myservo6;
Servo myservo7;
Servo myservo8;
int pos = 40;
  // variable to store the servo position 
  int d=1000;
void setup() 
{ 
  myservo1.attach(2);
  myservo2.attach(3);
  myservo3.attach(4);
  myservo4.attach(5);
  myservo5.attach(9);
  myservo6.attach(10);
  myservo7.attach(11);
  myservo8.attach(12);// attaches the servo on pin 9 to the servo object 


  int pos = 40;  
 // myservo1.write(pos);
  myservo2.write(80);
  myservo3.write(pos);
  myservo4.write(pos);
 // myservo5.write(pos);
  myservo6.write(80);
  myservo7.write(pos);
  myservo8.write(pos);
  delay(1000);
 //leg 2 open:
  for(pos = 80; pos >= 40; pos -= 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo6.write(pos);
    delay(30);
  }
  delay(d);
  
    for(pos = 80; pos >= 40; pos -= 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo2.write(pos);
    delay(30);
  }
  delay(d);
   for(pos = 40; pos <= 80; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo6.write(pos);
    delay(30);
  }
  delay(d);
  
  // leg 2 close
 
}
void loop()
{
}
