#include<Servo.h>
Servo servo;
int x_axis;
int servo_val;

void setup()
{
pinMode(A0,INPUT);
servo.attach(10);
}

void loop()
{
x_axis=analogRead(A0);
servo_val=map(x_axis,0,1023,0,180);
servo.write(servo_val);

}
