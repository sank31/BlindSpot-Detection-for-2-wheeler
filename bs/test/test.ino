int trigPin1 = 13;
int echoPin1 = 12;
int led1 = 11;
int trigPin2 = 10;
int echoPin2 = 9;
int led2 = 8;

void setup()
{
  Serial.begin (9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(led2, OUTPUT);
}

void sensor1()
{ 
  int duration1, distance1;
  digitalWrite (trigPin1, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin1, LOW);
  duration1 = pulseIn (echoPin1, HIGH);
  distance1 = (duration1/2) / 29.1;

  if (distance1 > 250)
  {
  digitalWrite(led1,HIGH);
  }
  else  
  {
  digitalWrite(led1,LOW);
  }
}
void sensor2(){ 
  int duration2, distance2;
  digitalWrite (trigPin2, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin2, LOW);
  duration2 = pulseIn (echoPin2, HIGH);
  distance2 = (duration2/2) / 29.1;

  if (distance2 >250)
  {
  digitalWrite(led2,HIGH);
  }
  else 
  {
  digitalWrite(led2,LOW);
  }
}

void loop() 
{
  sensor1();
  sensor2();
  delay(2000);
}
