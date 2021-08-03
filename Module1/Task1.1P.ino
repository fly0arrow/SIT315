// C++ code
//

int LEDPIN = 13;
int INPUTPIN = 2;
int pirState = LOW;
int val = 0;
 
void setup() {
  pinMode(LEDPIN, OUTPUT);
  pinMode(INPUTPIN, INPUT);
  
  Serial.begin(9600);
}
 
void loop(){
  val = digitalRead(INPUTPIN);
  if (val == HIGH) { 
    digitalWrite(LEDPIN, HIGH);
    if (pirState == LOW) {
      Serial.println("Motion detected!");
      pirState = HIGH;
    }
  } 
  else {
    digitalWrite(LEDPIN, LOW);
    if (pirState == HIGH){
      Serial.println("Motion ended!");
      pirState = LOW;
    }
  }
}
