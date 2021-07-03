// C-embedded code
//
#include <Servo.h>

int position = 90;

int i = 0;

int j = 0;

Servo servo_9;
Servo servo_10;
Servo servo_11;
Servo servo_5;
Servo servo_6;

void setup()
{
  servo_9.attach(9, 500, 2500);
  servo_10.attach(10, 500, 2500);
  servo_11.attach(11, 500, 2500);
  servo_5.attach(5, 500, 2500);
  servo_6.attach(6, 500, 2500);

}

void loop()
{
  position = 90;
  for (position = 1; position <= 179; position += 1) {
    servo_9.write(position);
    delay(2); // Wait for 20 millisecond(s)
  }
  for (position = 179; position >= 1; position -= 1) {
    servo_9.write(position);
  }
  
  ///////
  position = 90;
  for (position = 1; position <= 179; position += 1) {
    servo_10.write(position);
    delay(2); // Wait for 20 millisecond(s)
  }
  for (position = 179; position >= 1; position -= 1) {
    servo_10.write(position);
  }
  
  ///////
  position = 90;
  for (position = 1; position <= 179; position += 1) {
    servo_11.write(position);
    delay(2); // Wait for 20 millisecond(s)
  }
  for (position = 179; position >= 1; position -= 1) {
    servo_11.write(position);
  }
  
  //////
  position = 90;
  for (position = 1; position <= 179; position += 1) {
    servo_5.write(position);
    delay(2); // Wait for (s)
  }
  for (position = 179; position >= 1; position -= 1) {
    servo_5.write(position);
  }
  
  ///////
  position = 90;
  for (position = 1; position <= 179; position += 1) {
    servo_6.write(position);
    delay(2); // Wait for 20 millisecond(s)
  }
  for (position = 179; position >= 1; position -= 1) {
    servo_6.write(position);
  }
  
  
}
