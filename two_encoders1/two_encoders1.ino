int la= 2;
int rb= 3;
int lc= 4;
int rd= 7;


volatile int pulse;
volatile int pulseOld;
volatile int pulse1;
volatile int pulse1Old;



void setup() {
Serial.begin(9600);
pinMode(la,INPUT_PULLUP);
pinMode(rb,INPUT_PULLUP);
pinMode(lc,INPUT_PULLUP);
pinMode(rd,INPUT_PULLUP);
attachInterrupt(0,latrig,CHANGE);
attachInterrupt(1,rbtrig,CHANGE);
Serial.println("START>>>");
}

void loop() {
 if(pulse1!=pulse1Old)
 {
  Serial.print("L: ");
  Serial.println(pulse1);
 }
if(pulse!=pulseOld)
 {
  Serial.print("R: ");
  Serial.println(pulse);
 }

 pulse1Old=pulse1;
 pulseOld=pulse;

}

void latrig()
{
  if( digitalRead(la)== digitalRead(lc) )
  {
  pulse++;
  }
else{
  pulse--;
}


}

  

void rbtrig()
{
  if( digitalRead(rb)== digitalRead(rd) )
  {
  pulse1--;
  }
  else 
  {
  pulse1++;  
  }
 
}

