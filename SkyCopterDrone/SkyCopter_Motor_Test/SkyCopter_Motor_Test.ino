//
//  SkyCopter Motor Test
//
//  Note : Remove the props first for safety
//

int motor1 = 5;
int motor2 = 6;
int motor3 = 9;
int motor4 = 10;

void setup()
{
    pinMode(motor1, OUTPUT);   
    pinMode(motor2, OUTPUT);   
    pinMode(motor3, OUTPUT);  
    pinMode(motor4, OUTPUT); 
    
    delay(3000);
}

void loop () 
{
  int throttle20 = 20;//0~255  
  
  analogWrite(motor1, throttle20);
  analogWrite(motor2, throttle20);
  analogWrite(motor3, throttle20);
  analogWrite(motor4, throttle20);

  delay(3000);

  int throttle50 = 50;//0~255  
  
  analogWrite(motor1, throttle50);
  analogWrite(motor2, throttle50);
  analogWrite(motor3, throttle50);
  analogWrite(motor4, throttle50);

  delay(3000);
/*
  int throttle100 = 100;//0~255  
  
  analogWrite(motor1, throttle100);
  analogWrite(motor2, throttle100);
  analogWrite(motor3, throttle100);
  analogWrite(motor4, throttle100);
  
  delay(3000);
*/
}


