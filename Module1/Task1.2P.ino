// C++ code
//

int LEDPIN = 13;
int INPUTPIN = 2;

uint8_t LEDSTATE = LOW;

void setup() {
  pinMode(LEDPIN, OUTPUT);
  pinMode(INPUTPIN, INPUT_PULLUP);
  

  attachInterrupt(digitalPinToInterrupt(INPUTPIN), toggle, FALLING);
}
 
void loop(){

}

void toggle() {
  Serial.begin(9600);

  LEDSTATE = !LEDSTATE;
  digitalWrite(LEDPIN, LEDSTATE);
  if (LEDSTATE == HIGH) {Serial.println("LED ON");}
  else {Serial.println("LED OFF");}
}