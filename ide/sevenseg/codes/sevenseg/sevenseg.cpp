void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(13, a); 
  digitalWrite(12, b); 
  digitalWrite(14, c); 
  digitalWrite(27, d); 
  digitalWrite(26, e); 
  digitalWrite(25, f);     
  digitalWrite(33, g); 
}
void setup() 
{
    pinMode(13, OUTPUT);  
    pinMode(12, OUTPUT);
    pinMode(14, OUTPUT);
    pinMode(27, OUTPUT);
    pinMode(26, OUTPUT);
    pinMode(25, OUTPUT);
    pinMode(33, OUTPUT);            
}
void loop() 
{
sevenseg(1,0,0,1,1,1,1);  
}
