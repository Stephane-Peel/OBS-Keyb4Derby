#include <Keyboard.h>

/*
  Keyboard Message test

  For the Arduino Leonardo and Micro.

  Sends a text string when a button is pressed.

  The circuit:
  - pushbutton attached from pin 4 to +5V
  - 10 kilohm resistor attached from pin 4 to ground

  created 24 Oct 2011
  modified 27 Mar 2012
  by Tom Igoe
  modified 11 Nov 2013
  by Scott Fitzgerald

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/KeyboardMessage
*/





const int ledStream =  5;// LED StreeamON pin
const int ledRec =  6;// LED RecON pin
const int ledTallyPrev = A0 ;
const int ledTallyPlay = A1;
bool StreamState = 0;  
bool RecState = 0;  
unsigned long previousMillisledStream = 0; 
unsigned long previousMillisLedRec = 0; 
const long interval = 1000; 
const int PwmIntervalsStream = 555; // The number of StepCounters between the output being on and off
const int PwmIntervalsRec = 555; // The number of StepCounters between the output being on and off
float RRec; // The R value in the graph equation
float RStream; // The R value in the graph equation
int ToggleSenseRec = 0;// Toggle the sense of lighting (increase/decrease)
int ToggleSenseStream = 0;// Toggle the sense of lighting (increase/decrease)
int SpeedValueStream = 8; // SpeedValue
int SpeedValueRec = 6; // SpeedValue
int StepCounterStream = 0; // StepCounter StepCounter
int StepCounterRec = 0; // StepCounter StepCounter
int HighOffsetStream = 120; // Max light Value
int LowOffsetStream = 0; // Min light Value
int HighOffsetRec = 254; // Max light Value
int LowOffsetRec = 20; // Min light Value
bool OldTally = 0;



const int buttonPin2 = 2;          // input pin for pushbutton
const int buttonPin3 = 3;          // input pin for pushbutton
const int buttonPin4 = 4;          // input pin for pushbutton
const int buttonPin7 = 7;          // input pin for pushbutton
const int buttonPin8 = 8;          // input pin for pushbutton
const int buttonPin9 = 9;          // input pin for pushbutton
const int buttonPin10 = 10;          // input pin for pushbutton
const int buttonPin11 = 11;          // input pin for pushbutton
const int buttonPin12 = 12;          // input pin for pushbutton
const int buttonPin13 = 13;          // input pin for pushbutton

int previousButtonState2 = HIGH;   // for checking the state of a pushButton
int previousButtonState3 = HIGH;   // for checking the state of a pushButton
int previousButtonState4 = HIGH;   // for checking the state of a pushButton
int previousButtonState7 = HIGH;   // for checking the state of a pushButton
int previousButtonState8 = HIGH;   // for checking the state of a pushButton
int previousButtonState9 = HIGH;   // for checking the state of a pushButton
int previousButtonState10 = HIGH;   // for checking the state of a pushButton
int previousButtonState11 = HIGH;   // for checking the state of a pushButton
int previousButtonState12 = HIGH;   // for checking the state of a pushButton
int previousButtonState13 = HIGH;   // for checking the state of a pushButton

void setup() {
  TCCR1B = TCCR1B & 0b11111000 | 0x02;
  Serial.begin(9600);
  RStream = (PwmIntervalsStream * log10(2))/(log10(255));  // Calculate the R variable (only needs to be done once at setup)
  RRec = (PwmIntervalsRec * log10(2))/(log10(255));  // Calculate the R variable (only needs to be done once at setup)

  pinMode(ledTallyPrev, OUTPUT);
  pinMode(ledTallyPlay, OUTPUT);
  pinMode(ledRec, OUTPUT); 
  pinMode(ledStream, OUTPUT);

// StartUP Blinking Pattern
analogWrite(ledRec, 255);
analogWrite(ledStream, 0);
digitalWrite(ledTallyPrev, LOW);
digitalWrite(ledTallyPlay, HIGH);
delay (500);
analogWrite(ledRec, 128);
analogWrite(ledStream, 32);
digitalWrite(ledTallyPrev, HIGH);
digitalWrite(ledTallyPlay, LOW);
delay (500);
analogWrite(ledRec, 64);
analogWrite(ledStream, 64);
digitalWrite(ledTallyPrev, LOW);
digitalWrite(ledTallyPlay, HIGH);
delay (500);
analogWrite(ledRec, 32);
analogWrite(ledStream, 128);
digitalWrite(ledTallyPrev, HIGH);
digitalWrite(ledTallyPlay, LOW);
delay (500);
analogWrite(ledRec, 0);
analogWrite(ledStream, 255);
digitalWrite(ledTallyPrev, LOW);
digitalWrite(ledTallyPlay, LOW);
delay (100);
analogWrite(ledRec, 255);
analogWrite(ledStream, 0);
digitalWrite(ledTallyPrev, HIGH);
digitalWrite(ledTallyPlay, HIGH);
delay (100);
analogWrite(ledRec, 0);
analogWrite(ledStream, 255);
digitalWrite(ledTallyPrev, LOW);
digitalWrite(ledTallyPlay, HIGH);
delay (100);
analogWrite(ledRec, 255);
analogWrite(ledStream, 0);
digitalWrite(ledTallyPrev, HIGH);
digitalWrite(ledTallyPlay, LOW);
delay (100);
analogWrite(ledRec, 0);
analogWrite(ledStream, 255);
digitalWrite(ledTallyPrev, LOW);
digitalWrite(ledTallyPlay, LOW);
    
  // make the pushButton pin an input:

 
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin7, INPUT_PULLUP);
  pinMode(buttonPin8, INPUT_PULLUP);
  pinMode(buttonPin9, INPUT_PULLUP);
  pinMode(buttonPin10, INPUT_PULLUP);
  pinMode(buttonPin11, INPUT_PULLUP);
  pinMode(buttonPin12, INPUT_PULLUP);
  pinMode(buttonPin13, INPUT_PULLUP);
  // initialize control over the keyboard:
  Keyboard.begin();
      digitalWrite(ledRec, 0);

}

void loop() {
OBSKeyboard();
LedBeatRec(); 
LedBeatStream();
Tally();

}
