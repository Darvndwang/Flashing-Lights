/*
Spaceship Interface
*/

// Creates a global variable to  hold the state of the switch. This variable is persistent throughout the program.  Whenever you refer to switchState, you’re talking about the number it holds.

int  switchstate = 0;

void setup() {
// declares the LED pins as outputs
pinMode(3,  OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);

// declares the switch  pin as an input
pinMode(2, INPUT);
}

void loop() {

// reads the  value of the switch. digitalRead() checks to see if there is voltage on the pin  or not
switchstate = digitalRead(2);

// if the button is not pressed turn  on the green LED and off the red LEDs
if (switchstate == LOW) {
digitalWrite(3,  HIGH); // turns the green LED on pin 3 on
digitalWrite(4, LOW);  // turns the red  LED on pin 4 off
digitalWrite(5, LOW);  // turns the red LED on pin 5 off
}

//  this else is part of the above if() statement. if the switch is not LOW (the button  is pressed) turn off the green LED and blink alternatively the red LEDs
else  {
digitalWrite(3, LOW);  // turns the green LED on pin 3 off
digitalWrite(4,  LOW);  // turns the red LED on pin 4 off
digitalWrite(5, HIGH); // turns the red  LED on pin 5 on
// waits for a quarter second before changing the light
delay(250);
digitalWrite(4,  HIGH); // turn the red LED on pin 4 on
digitalWrite(5, LOW);  // turn the red  LED on pin 5 off
// waits for a quarter second before changing the light
delay(250);
}
}