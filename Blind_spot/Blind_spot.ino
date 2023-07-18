// Author ~ Shrikar Nakhye
int ECHO=1;
int Trig=2;
int led_vcc=3;
void setup() 
{
pinMode(led_vcc,OUTPUT);
pinMode(ECHO,INPUT);
pinMode(Trig,OUTPUT);
Serial.begin(9600);
}
void loop() 
{
digitalWrite(Trig,LOW);
delay(5);
digitalWrite(Trig,HIGH);
delay(50);
digitalWrite(Trig,LOW);
int duration= pulseIn(ECHO,HIGH);
int cm=duration*0.0689;
Serial.println(cm);
 if(cm<10)                                                                                                                                                                                                                                               
 {
digitalWrite(led_vcc,HIGH);
 }
else
  {
    digitalWrite(led_vcc,LOW);
  }
}
