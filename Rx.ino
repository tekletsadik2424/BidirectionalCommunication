const unsigned int MaxLength=12;
void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  
  while (Serial.available())
  {
    static char message[MaxLength];
    static int pos=0;
    char h=Serial.read();
    if(h != '\n' && (pos < MaxLength-1))
    {
      message[pos]=h;
      pos++;
    }
    else
    {
       message[pos]='\0';
       //Serial.println(message);
       //String m=takeValue(message);
       float number =atof(message);
       //Serial.println(number);
       T(number);
       pos=0;
    }
    //Serial.println(h);
  }

}
void T(float n)
{
  if( n<1000)
  {
    Serial.println(n-933);
    digitalWrite(7,HIGH);
  }
  else if(n>1000 && n<1100)
  {
    Serial.println(n-960);
    digitalWrite(6,HIGH);
  }
  else
  {
    Serial.println(n-1084);
    digitalWrite(5,HIGH);
  }
}
