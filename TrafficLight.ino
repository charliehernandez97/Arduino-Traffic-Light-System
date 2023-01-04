const int RED_LED_PIN_1 = 7;
const int YELLOW_LED_PIN_1 = 6;
const int GREEN_LED_PIN_1 = 5;

const int RED_LED_PIN_2 = 8;
const int YELLOW_LED_PIN_2 = 9;
const int GREEN_LED_PIN_2 = 10;

void setup() {
  // Set the LED pins as outputs
  pinMode(RED_LED_PIN_1, OUTPUT);
  pinMode(YELLOW_LED_PIN_1, OUTPUT);
  pinMode(GREEN_LED_PIN_1, OUTPUT);
  pinMode(RED_LED_PIN_2, OUTPUT);
  pinMode(YELLOW_LED_PIN_2, OUTPUT);
  pinMode(GREEN_LED_PIN_2, OUTPUT);
}

void loop() {
  // Turn on the green LED for traffic light 1 and the red LED for traffic light 2
  digitalWrite(GREEN_LED_PIN_1, HIGH);
  digitalWrite(RED_LED_PIN_2, HIGH);
  delay(3000);  // wait for 3 seconds

  // Turn off the green LED for traffic light 1 and turn on the yellow LED for traffic light 1
  digitalWrite(GREEN_LED_PIN_1, LOW);
  digitalWrite(YELLOW_LED_PIN_1, HIGH);
  delay(1000);  // wait for 1 second

  // Turn off the yellow LED for traffic light 1 and turn on the red LED for traffic light 1
  digitalWrite(YELLOW_LED_PIN_1, LOW);
  digitalWrite(RED_LED_PIN_1, HIGH);  
  delay(1000);  // wait for 1 seconds

  digitalWrite(RED_LED_PIN_2, LOW);
  digitalWrite(GREEN_LED_PIN_2, HIGH);
  delay(3000);

  digitalWrite(GREEN_LED_PIN_2, LOW);
  digitalWrite(YELLOW_LED_PIN_2, HIGH);
  delay(1000);


  digitalWrite(YELLOW_LED_PIN_2, LOW);
  digitalWrite(RED_LED_PIN_2, HIGH);  
  delay(1000);  // wait for 1 seconds

  digitalWrite(RED_LED_PIN_1, LOW);

}