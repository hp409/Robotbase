


 
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

void loop() 
{ 
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  digitalWrite(pwm,HIGH);
  digitalWrite(pwm1,HIGH);
}

