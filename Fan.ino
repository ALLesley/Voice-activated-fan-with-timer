const int motorIn1 = 9;  
const int motorIn2 = 10; 

#define LED_PIN 8
#define BUTTON_PIN 2

bool ledState = false;
bool lastButtonState = LOW;
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;
int reading = 0;

void setup() {
  pinMode(motorIn1,OUTPUT); 
  pinMode(motorIn2,OUTPUT); 
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);

  digitalWrite(LED_PIN, LOW);
  stopFan();
}

void loop() {
  //Serial.println("Loop running...");
  reading = digitalRead(BUTTON_PIN);
  
    //button stuff
    if (reading == HIGH && lastButtonState == LOW) {
      ledState = !ledState;
      Serial.println(ledState);

      if (ledState == HIGH) {
        digitalWrite(LED_PIN, HIGH);
        //fanON();
        Serial.println("LED_ON");
      } else {
        digitalWrite(LED_PIN, LOW);
        stopFan();
        Serial.println("LED_OFF");
      }
    }
    lastButtonState = reading;

  //fan stuff
  if (Serial.available() > 0){
    String pyResponse = Serial.readStringUntil('\n');
    if (ledState == HIGH && pyResponse == "YES"){
      fanON();
    }
  }
  

}

void fanON() {
  analogWrite(motorIn1, 200);  //set the speed of motor
  analogWrite(motorIn2,0);  //stop the motorIn2 pin of motor
}

void stopFan() {
  analogWrite(motorIn1, 0);
  analogWrite(motorIn2, 0);
}
