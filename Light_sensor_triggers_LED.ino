const int LIGHT_SENSOR_PIN = A0; // Arduino pin connected to light sensor's  pin
const int LED_PIN          = 3;  // Arduino pin connected to LED's pin
const int ANALOG_THRESHOLD = 500;  // this sets the the threshold for when the LED turns on.
 
// variables will change:
int analogValue;
 
void setup() {
  pinMode(LED_PIN, OUTPUT); // set arduino pin to output mode
}
 
void loop() {
  analogValue = analogRead(LIGHT_SENSOR_PIN); // read the input on analog pin
 
  if(analogValue < ANALOG_THRESHOLD)
    digitalWrite(LED_PIN, HIGH); // turn on LED
  else
    digitalWrite(LED_PIN, LOW);  // turn off LED
}