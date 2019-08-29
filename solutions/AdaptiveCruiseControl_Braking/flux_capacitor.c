
/*  
 *
 * PIR sensor tester 
 */
 
int ledPin = 13;                // choose the pin for the LED
int inputPin = 2;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the pin status

int ledPin1 = 9;
int ledPin2 = 6;
int ledPin3 = 5;
int ledPin4 = 3;
int surroundPin = 11;
int fadespeed = 10;
int timeTravelSpeed = 80;
int timeTravelLength = 25;
 
void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
 
  //Serial.begin(9600);
}
 
void loop(){
  val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, HIGH);  // turn LED ON
    runlights(); //run the light show!
    if (pirState == LOW) {
      // we have just turned on
      //Serial.println("Motion detected!");
      // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW); // turn LED OFF
    if (pirState == HIGH){
      // we have just turned of
      //Serial.println("Motion ended!");
      // We only want to print on the output change, not state
      pirState = LOW;
    }
  }
}

void runlights(){
  //Speed up loops
  for (int fadeIncrement = 20; fadeIncrement <=100; fadeIncrement +=2){
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=fadeIncrement) { 
      analogWrite(ledPin1, fadeValue);             
      delay(fadespeed);                            
    } 
    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=fadeIncrement) { 
      analogWrite(ledPin1, fadeValue);         
      delay(fadespeed);                                
    } 
    analogWrite(ledPin1, 0);         
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=fadeIncrement) { 
      analogWrite(ledPin2, fadeValue);             
      delay(fadespeed);                            
    } 
    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=fadeIncrement) { 
      analogWrite(ledPin2, fadeValue);         
      delay(fadespeed);                                
    } 
    analogWrite(ledPin2, 0);             
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=fadeIncrement) { 
      analogWrite(ledPin3, fadeValue);             
      delay(fadespeed);                            
    } 
    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=fadeIncrement) { 
      analogWrite(ledPin3, fadeValue);         
      delay(fadespeed);                                
    } 
    analogWrite(ledPin3, 0);         
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=fadeIncrement) { 
      analogWrite(ledPin4, fadeValue);             
      delay(fadespeed);                            
    } 
    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=fadeIncrement) { 
      analogWrite(ledPin4, fadeValue);         
      delay(fadespeed);                                
    }     
    analogWrite(ledPin4, 0);         
  }
  
  //time travel loops
  for (int timetravel = 1; timetravel <=timeTravelLength; timetravel +=1){
    //turn on surround lights
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=15) { 
      analogWrite(surroundPin, fadeValue);             
      delay(fadespeed);                            
    } 
 
    //Run time travel lights    
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=timeTravelSpeed) { 
      analogWrite(ledPin1, fadeValue);             
      delay(fadespeed);                            
    } 
    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=timeTravelSpeed) { 
      analogWrite(ledPin1, fadeValue);         
      delay(fadespeed);                                
    } 
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=timeTravelSpeed) { 
      analogWrite(ledPin2, fadeValue);             
      delay(fadespeed);                            
    } 
    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=timeTravelSpeed) { 
      analogWrite(ledPin2, fadeValue);         
      delay(fadespeed);                                
    } 
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=timeTravelSpeed) { 
      analogWrite(ledPin3, fadeValue);             
      delay(fadespeed);                            
    } 
    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=timeTravelSpeed) { 
      analogWrite(ledPin3, fadeValue);         
      delay(fadespeed);                                
    } 
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=timeTravelSpeed) { 
      analogWrite(ledPin4, fadeValue);             
      delay(fadespeed);                            
    } 
    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=timeTravelSpeed) { 
      analogWrite(ledPin4, fadeValue);         
      delay(fadespeed);                                
    } 
   
   //fade out the surround lights 
    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=15) { 
      analogWrite(surroundPin, fadeValue);             
      delay(fadespeed);                            
    } 
  }
  analogWrite(ledPin1, 0);         
  analogWrite(ledPin2, 0);         
  analogWrite(ledPin3, 0);         
  analogWrite(ledPin4, 0);   
}
