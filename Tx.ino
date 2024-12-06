long temprand;
long humrand;
long pressurerand;
// initialize the values
int temp=22;// in degree celius
int hum=40;// it is between 30% to 50%
int pressure=16;// in pounds per square 
void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
temprand=temp + random(-25,45)+933;
humrand=hum + random(0,100)+960;
pressurerand=pressure + random(0,5)+1084;

 Serial.println(temprand);
 Serial.println(humrand);
 Serial.println(pressurerand);
  delay(2000);
}
