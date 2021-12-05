// Blink green/yellow/red LED while the button is pressed

const int LED_GREEN  = 11;   // the pin for the green LED
const int LED_YELLOW = 10;   // the pin for the yellow LED
const int LED_RED    =  9;   // the pin for the red LED
const int BUTTON     =  7;   // the input pin where the pushbutton is connected

const int TRANSITION_MS = 1000;

int val = 0; // val will be used to store the state of the input pin

void setup() {
  pinMode(LED_GREEN, OUTPUT); // tell Arduino LED is an output
  pinMode(LED_YELLOW, OUTPUT); // tell Arduino LED is an output
  pinMode(LED_RED, OUTPUT); // tell Arduino LED is an output
  pinMode(BUTTON, INPUT); // and BUTTON is an input
}

void loop(){
  val = digitalRead(BUTTON); // read input value and store it
  
  // check whether the input is HIGH (button pressed)
  if (val == HIGH) {
    digitalWrite(LED_GREEN, HIGH); // turn green LED ON
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_RED, LOW);
    delay(TRANSITION_MS);
    digitalWrite(LED_GREEN, LOW); // turn green LED off
    digitalWrite(LED_YELLOW, HIGH);
    delay(TRANSITION_MS);
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_RED, HIGH);
    delay(TRANSITION_MS);
    digitalWrite(LED_RED,LOW);
  } 
  else {
    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_RED, LOW);
  }
}

// EOF
