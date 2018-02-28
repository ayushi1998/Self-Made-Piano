// CODE WRITEN IN THE MONTH OF NOVEMBER,2016
// Maker's Box Workshop

#define trigPin 12
#define echoPin 13
#define buzzerpin 9

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  int sensor;    sensor = analogRead(0);

  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  Serial.println(sensor);
  if(sensor < 238){
     if (distance > 2 && distance <= 7){
      Serial.println("Clow");
      tone(buzzerpin, 4186);
    }
    if (distance > 7 && distance <= 12){
      Serial.println("D");
      tone(buzzerpin, 4699);
    }
    
    if (distance > 12 && distance <= 17){
      Serial.println("E");
      tone(buzzerpin, 5274);
    }
    
    if (distance > 17 && distance <= 22){
      Serial.println("F");
      tone(buzzerpin, 5588);
    }
    
    if (distance > 22 && distance <= 27){
      Serial.println("G");
      tone(buzzerpin, 6272);
    }
    
    if (distance > 27 && distance <= 32){
      Serial.println("A");
      tone(buzzerpin, 7040);
    }
    
    if (distance > 32 && distance <= 37){
      Serial.println("B");
      tone(buzzerpin, 7902);
    }
    
    if (distance > 37 && distance <= 42){
      Serial.println("Chigh");
      tone(buzzerpin, 8372);
    }
    
  }
  else if(sensor > 242){
    if (distance > 2 && distance <= 7){
      Serial.println("Clow");
      tone(buzzerpin, 2093);
    }
    
    if (distance > 7 && distance <= 12){
      Serial.println("D");
      tone(buzzerpin, 2349);
    }
    
    if (distance > 12 && distance <= 17){
      Serial.println("E");
      tone(buzzerpin, 2637);
    }
    
    if (distance > 17 && distance <= 22){
      Serial.println("F");
      tone(buzzerpin, 2794);
    }
    
    if (distance > 22 && distance <= 27){
      Serial.println("G");
      tone(buzzerpin, 3136);
    }
    
    if (distance > 27 && distance <= 32){
      Serial.println("A");
      tone(buzzerpin, 3520);
    }
    
    if (distance > 32 && distance <= 37){
      Serial.println("B");
      tone(buzzerpin, 3951);
    }
    
    if (distance > 37 && distance <= 42){
      Serial.println("Chigh");
      tone(buzzerpin, 4186);
    }
    
  }
  /*
  if (distance >= 400 || distance <= 2){
  }
  else {
    Serial.println(distance);
    tone(buzzerpin, 2500+distance);
  }*/
  delay(100);
}
