

#define CLK 3      //Right display wiring
#define DIO 2

#define CLK2 5     //Left display wiring
#define DIO2 4

#define trigPin 6        //Ultrasound modules wiring R=Right L=Left the other one is the middle
#define echoPin 7
#define trigPinR 8
#define echoPinR 9
#define trigPinL 10
#define echoPinL 11
#define Maxdistance 20  //Maximum distance 20cm

long duration; 
int distance;



void setup() {
     pinMode(trigPin, OUTPUT);       //Pinmodes of the HC-SR04 and starting the displays
     pinMode(echoPin, INPUT);
     pinMode(trigPinR, OUTPUT);
     pinMode(echoPinR, INPUT); 
     pinMode(trigPinL, OUTPUT);
     pinMode(echoPinL, INPUT); 
   
}

void loop() {

    int distanceM = CDistance(trigPin,echoPin);      //Calculating all the distances by calling the function below
    int distanceR = CDistance(trigPinR,echoPinR);
    int distanceL = CDistance(trigPinL,echoPinL);

    int R=min(distanceM,distanceR);                //We have two displays R and L, first we take the minimum distance between M/R and M/L
    int L=min(distanceM,distanceL);

    if(R>0 && R < Maxdistance){                   //Range of distance
                   // 0-7 are the levels of the display each distance between 0-20cm has a specified level you can change that 20
    }
    if(R> Maxdistance)                           //We're safe and the displays always shows there's enough space
   

    if(L>0 && L < Maxdistance){                 //Same as Right
      
    }
    if(L> Maxdistance)
    
    

     delay(50);
}

int CDistance(int a, int b){             //Calculating distance function, it takes two arguments (Trigger and Echo) and it executes the usual process of the HC-SR04
     digitalWrite(a, LOW); 
     delayMicroseconds(2);       
     digitalWrite(a, HIGH);
     delayMicroseconds(10);      
     digitalWrite(a, LOW); 
     duration = pulseIn(b, HIGH); 
     distance = duration*(0.034/2); 
     return distance;                  //Return the distance calculated
}
