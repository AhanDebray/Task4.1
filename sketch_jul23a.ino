#include <Servo.h>
Servo myservo;
int pos = 0;
int const trigPin = 10;
int const echoPin = 9;
int const buzzPin = 2;
int const ledPin = 13;
void setup()
{myservo.attach(11);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(buzzPin, OUTPUT);
pinMode(ledPin, OUTPUT);
}
void loop()
{int duration, distance;
digitalWrite(trigPin, HIGH);
delay(0);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration / 2) / 29.1;
if (distance <= 15 && distance >= 0)
{digitalWrite(buzzPin, HIGH);
digitalWrite(ledPin, HIGH);
{myservo.write(0);
delay(15);
}}
else
{digitalWrite(buzzPin, LOW);
 digitalWrite(ledPin, LOW);
{myservo.write(90);
 delay(15);
}}
delay(60);
}
