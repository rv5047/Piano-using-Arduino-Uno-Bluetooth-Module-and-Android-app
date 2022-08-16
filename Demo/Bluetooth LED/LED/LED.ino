/*
 * This sketch is code to recieve inputs from Android app over Bluetooth.
 * Inputs from Android app is used to turn LED on/off.
*/

int a; // Variable to store ASCII value of Character
int led = 13; // input pin for LED

// Initialize varibales, pin modes etc.
void setup()
  {
    Serial.begin(9600); // Baud rate (exchange rate of 9600 bit per second)
    pinMode(led,OUTPUT);  // Initialize pin mode
  }

// Infinite loop
void loop() {
  // When something is transmitted over Bluetooth
  if(Serial.available() > 0)
    {
      a=Serial.read(); // read message transmitted
      //Serial.println("inside"); // print statement for debugging
      //Serial.println(a==78);  // print statement for debugging

      // when character 'O' is transmitted (ASCII for O is 78)
      if(a==78)
        {
          digitalWrite(led,HIGH); // turn on the LED
        }
      // when character 'F' is transmitted (ASCII for F is 70)
      if(a==70)
        {
          digitalWrite(led,LOW);  // turn off the LED
        }
    }
}
