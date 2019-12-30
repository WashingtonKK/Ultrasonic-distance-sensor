#define trigPin 13
#define echoPin 12

float duration, distance;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(trigPin , OUTPUT);
    pinMode(echoPin , INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
     digitalWrite(trigPin, LOW);
     delay(2);
     digitalWrite(trigPin,HIGH);
     delay(10);
     digitalWrite(trigPin, LOW);

     duration = pulseIn( echoPin, HIGH);

     distance = duration/29/2;

     
     if(distance >=400 || distance  <= 2) {
          Serial.println("-------------OUT OF RANGE---------------");
     } else {Serial.println("Obstacle is ");
     Serial.print(distance);
     Serial.print("cm away");
      delay(100);
     }
    
}
