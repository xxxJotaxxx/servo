#include <Arduino.h>
#include <Servo.h>

Servo myservo;
int initialPos = 90;
int speed = 15;
int angle = 180;

void setup()
{
    // attaches the servo on pin 9 to the servo object
    myservo.attach(9);

    //initilize the servo in position center 90º
    myservo.write(initialPos);
    delay(1000);
}

void loop()
{
    for (int pos = 0; pos <= angle; pos += 1)
    {
        myservo.write(pos);
        delay(speed);
    }
    for (int pos = angle; pos >= 0; pos -= 1)
    {
        myservo.write(pos);
        delay(speed);
    }
}