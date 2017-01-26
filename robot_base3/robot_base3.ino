


 
int in1 = 8;
int in2 = 11;
int in3 = 12;
int in4 = 13;
int pwm = 9;
int pwm1 =10;



void setup() 
{ 
 
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(pwm,OUTPUT);
  pinMode(pwm1,OUTPUT);
} 

void _mForward()
{ 
  digitalWrite(pwm,HIGH);
  digitalWrite(pwm1,HIGH);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  Serial.println("going forward!");
}
void _mBackward()
{ 
  digitalWrite(pwm,HIGH);
  digitalWrite(pwm1,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  Serial.println("going backward!");
}
void _mLeft()
{ 
  digitalWrite(pwm,HIGH);
  digitalWrite(pwm1,HIGH);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  Serial.println("going left!");
}
void _mRight()
{ 
  digitalWrite(pwm,HIGH);
  digitalWrite(pwm1,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  Serial.println("going right!");
}

void loop() 
{ 
  _mForward();

  delay(1000);

  _mBackward();

  delay(1000);
  _mLeft();

  delay(1000);
  _mRight();

  delay(1000);
}


