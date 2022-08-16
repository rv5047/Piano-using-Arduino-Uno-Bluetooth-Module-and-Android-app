/*
 * This sketch is code to recieve inputs from Android app over Bluetooth.
 * Inputs from Android app is notes to be played using Piezo speaker.
*/

int a;  // Variable to store ASCII value of Characters (Notes to be played)
int buzzerPin = 7;  // Input pin for Piezo

// Initialize varibales, pin modes etc.
void setup()
  {
  Serial.begin(9600); // Baud rate (exchange rate of 9600 bit per second)
  pinMode(buzzerPin,OUTPUT);  // Initialize pin mode
  }

// Infinite loop
void loop() 
  {
  // When something is transmitted over Bluetooth
  while(Serial.available()) // Serial.available() returns size of message transmitted over bluetooth in BYTE
    {
    a=Serial.read();  // read message transmitted
    Serial.println(a);  // print to serial monitor for debugging

    // when note 'A' is played (ASCII for A = 65)
    if(a==65)
      {
        tone(buzzerPin, 262); // frequency of tone to be played with pin number
        delay(200); // delay of 200 ms
        noTone(buzzerPin);  // stop the tone
      }

    // when note 'B' is played (ASCII for B = 66)
    if(a==66)
      {
        tone(buzzerPin, 294); // frequency of tone to be played with pin number
        delay(200); // delay of 200 ms
        noTone(buzzerPin);  // stop the tone
      }

    // when note 'C' is played (ASCII for C = 67)
    if(a==67)
      {
        tone(buzzerPin, 330); // frequency of tone to be played with pin number
        delay(200); // delay of 200 ms
        noTone(buzzerPin);  // stop the tone
      }

    // when note 'D' is played (ASCII for D = 68)
    if(a==68) 
      {
        tone(buzzerPin, 349); // frequency of tone to be played with pin number
        delay(200); // delay of 200 ms
        noTone(buzzerPin);  // stop the tone
      }

    // when note 'E' is played (ASCII for E = 69)
    if(a==69)
      {
        tone(buzzerPin, 392); // frequency of tone to be played with pin number
        delay(200); // delay of 200 ms
        noTone(buzzerPin);  // stop the tone
      }

    // when note 'F' is played (ASCII for F = 70)
    if(a==70)
      {
        tone(buzzerPin, 440); // frequency of tone to be played with pin number
        delay(200); // delay of 200 ms
        noTone(buzzerPin);  // stop the tone
      }

    // when note 'G' is played (ASCII for G = 71)
    if(a==71)
      {
        tone(buzzerPin, 494); // frequency of tone to be played with pin number
        delay(200); // delay of 200 ms
        noTone(buzzerPin);  // stop the tone
      }
    }
  }
