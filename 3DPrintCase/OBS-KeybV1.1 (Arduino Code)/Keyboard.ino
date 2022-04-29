void OBSKeyboard(){
      int buttonState2 = digitalRead(buttonPin2);
  if ((buttonState2 != previousButtonState2)
      && (buttonState2 == HIGH)) {
    Keyboard.press(KEY_F13);
    delay(300); 
    Keyboard.releaseAll();
  }
  previousButtonState2 = buttonState2;


    int buttonState3 = digitalRead(buttonPin3);
  if ((buttonState3 != previousButtonState3)
      && (buttonState3 == HIGH)) {
    Keyboard.press(KEY_F14);
     delay(300); 
     Keyboard.releaseAll();
 }
  previousButtonState3 = buttonState3;

      int buttonState4 = digitalRead(buttonPin4);
  if ((buttonState4 != previousButtonState4)
      && (buttonState4 == HIGH)) {
    Keyboard.press(KEY_F15);
      delay(300); 
      Keyboard.releaseAll();
}
  previousButtonState4 = buttonState4;

    int buttonState7 = digitalRead(buttonPin7);
  if ((buttonState7 != previousButtonState7)
      && (buttonState7 == HIGH)) {
    Keyboard.press(KEY_F16);
      delay(300); 
      Keyboard.releaseAll();
}
  previousButtonState7 = buttonState7;

      int buttonState8 = digitalRead(buttonPin8);
  if ((buttonState8 != previousButtonState8)
      && (buttonState8 == HIGH)) {
    Keyboard.press(KEY_F17);
      delay(300); 
      Keyboard.releaseAll();
}
  previousButtonState8 = buttonState8;

      int buttonState9 = digitalRead(buttonPin9);
  if ((buttonState9 != previousButtonState9)
      && (buttonState9 == HIGH)) {
    Keyboard.press(KEY_F18);
      delay(300); 
      Keyboard.releaseAll();
}
  previousButtonState9 = buttonState9;

      int buttonState10 = digitalRead(buttonPin10);
  if ((buttonState10 != previousButtonState10)
      && (buttonState10 == HIGH)) {
    Keyboard.press(KEY_F19);
      delay(300); 
      Keyboard.releaseAll();
}
  previousButtonState10 = buttonState10;

      int buttonState11 = digitalRead(buttonPin11);
  if ((buttonState11 != previousButtonState11)
      && (buttonState11 == HIGH)) {
    Keyboard.press(KEY_F20);
      delay(300); 
      Keyboard.releaseAll();
}
  previousButtonState11 = buttonState11;

   int buttonState12 = digitalRead(buttonPin12);
  if ((buttonState12 != previousButtonState12)
      && (buttonState12 == HIGH)) {
    Keyboard.press(KEY_F21);
      delay(300); 
      Keyboard.releaseAll();
}
  previousButtonState12 = buttonState12;

      int buttonState13 = digitalRead(buttonPin13);
  if ((buttonState13 != previousButtonState13)
      && (buttonState13 == HIGH)) {
    Keyboard.press(KEY_F22);
      delay(300); 
      Keyboard.releaseAll();
}
  previousButtonState13 = buttonState13;


}
