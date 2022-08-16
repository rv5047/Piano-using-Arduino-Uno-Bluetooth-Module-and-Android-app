/*
 * This sketch is code to play tones using Push Buttons
*/
int button1 = 2; // input pin for button 1
int button2 = 3; // input pin for button 2
int button3 = 4; // input pin for button 3
int button4 = 5; // input pin for button 4
int button5 = 6; // input pin for button 5
int button6 = 7; // input pin for button 6
int button7 = 8; // input pin for button 7

int buzzerPin = 13; // input pin for Piezo

// Initialize varibales, pin modes etc.
 void setup()
{
  //initialize button pins as input
  pinMode(but1,INPUT);
  pinMode(but2,INPUT);
  pinMode(but3,INPUT);
  pinMode(but4,INPUT);
  pinMode(but5,INPUT);
  pinMode(but6,INPUT);
  pinMode(but7,INPUT);
  
  //initialize buzzer pin as output
  pinMode(buzzer,OUTPUT);
  
}

// Infinite loop
void loop()
{
  //read the value from buttons
  int b1 = digitalRead(button1);
  int b2 = digitalRead(button2);
  int b3 = digitalRead(button3);
  int b4 = digitalRead(button4);
  int b5 = digitalRead(button5);
  int b6 = digitalRead(button6);
  int b7 = digitalRead(button7);

  // when button1 is pressed
  if( b1 == 1 ) // play note 'A'
    {
      tone(buzzerPin, 262); // frequency of tone to be played with pin number
      delay(200); // delay of 200 ms
      noTone(buzzerPin);  // stop the tone
    }
    
  // when button2 is pressed
  else if( b2 == 1 ) // play note 'B'
    {
      tone(buzzerPin, 294); // frequency of tone to be played with pin number
      delay(200); // delay of 200 ms
      noTone(buzzerPin);  // stop the tone
    }
    
  // when button3 is pressed
  else if( b3 == 1 ) // play note 'C'
    {
      tone(buzzerPin, 330); // frequency of tone to be played with pin number
      delay(200); // delay of 200 ms
      noTone(buzzerPin);  // stop the tone
    }
    
  // when button4 is pressed
  else if( b4 == 1 ) // play note 'D'
    {
      tone(buzzerPin, 349); // frequency of tone to be played with pin number
      delay(200); // delay of 200 ms
      noTone(buzzerPin);  // stop the tone
    }
    
  // when button5 is pressed
  else if( b5 == 1 ) // play note 'E'
    {
      tone(buzzerPin, 392); // frequency of tone to be played with pin number
      delay(200); // delay of 200 ms
      noTone(buzzerPin);  // stop the 
    }
    
  // when button6 is pressed
  else if( b6 == 1 ) // play note 'F'
    {
      tone(buzzerPin, 440); // frequency of tone to be played with pin number
      delay(200); // delay of 200 ms
      noTone(buzzerPin);  // stop the tone
    }
    
  // when button7 is pressed
  else if( b7 == 1 ) // play note 'G'
    {
      tone(buzzerPin, 494); // frequency of tone to be played with pin number
      delay(200); // delay of 200 ms
      noTone(buzzerPin);  // stop the tone
    }
}
