int in1=9;
int in2=10;
int in3=11;
int in4=12;
int en1=6;
int en2=5;
int reading=0;

void setup()
{
 Serial.begin(9600);
  pinMode(9,1);
  pinMode(10,1);
  pinMode(11,1);
  pinMode(12,1);
  pinMode(5,1);
  pinMode(6,1);
}
void loop()
{
  digitalWrite(5,1);
  digitalWrite(6,1);
  if (Serial.available()){
    reading=Serial.read();
    switch(reading)
  {
    case 'f':digitalWrite(12,1);digitalWrite(11,0);
             digitalWrite(9,1);digitalWrite(10,0);
      Serial.write("f");
                   break;
    case 'b':digitalWrite(12,0);digitalWrite(11,1);
             digitalWrite(9,0);digitalWrite(10,1);
      Serial.write("b");
     break;
    case 'r':digitalWrite(12,0);digitalWrite(11,0);
             digitalWrite(9,1);digitalWrite(10,0);
      Serial.write("r");
     break;
    case 'l':digitalWrite(12,1);digitalWrite(11,0);
             digitalWrite(9,0);digitalWrite(10,0);
      Serial.write("l");
     break;
    case 's':digitalWrite(12,0);digitalWrite(11,0);
             digitalWrite(9,0);digitalWrite(10,0);
      Serial.write("s");
       break;
  }}}