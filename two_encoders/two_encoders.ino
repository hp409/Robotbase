int a= 2;
int b= 3;

volatile int pulse=0;
volatile int pulseOld = 0;



void setup() {
Serial.begin(9600);
pinMode(a,INPUT_PULLUP);
pinMode(b,INPUT_PULLUP);
attachInterrupt(0,atrig,CHANGE);
attachInterrupt(1,btrig,CHANGE);
Serial.println("START>>>");
}

void loop() {
 if(pulse!=pulseOld)
 {
  Serial.println(pulse);
 }
 else
 {}
 pulseOld=pulse;

}

void atrig()
{
  if( digitalRead(a)== digitalRead(b) )
  {
  pulse++;
  }
  else 
  {
  pulse--;  
  }


}

  

void btrig()
{
  if( digitalRead(b)== digitalRead(a) )
  {
  pulse--;
  }
  else 
  {
  pulse++;  
  }
 
}

