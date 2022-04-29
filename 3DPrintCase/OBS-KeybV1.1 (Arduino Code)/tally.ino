void Tally(){
  

if(Serial.available())
  {
    char currentScene = Serial.read();
//     if (currentScene == 'S') {analogWrite(ledStream, 255);}
//     if (currentScene == 'O') {analogWrite(ledStream, 0);}
//     if (currentScene == 'R') {analogWrite(ledRec, 255);}
//     if (currentScene == 'P') {analogWrite(ledRec, 0);}

     
     if (currentScene == 'S') {StreamState = 1; } //Streaming Started
     if (currentScene == 'O') {analogWrite(ledStream, 255); StreamState = 0;} //Streaming OFF
     
     if (currentScene == 'R') {RecState = 1;}//Rec ON
     if (currentScene == 'P') {analogWrite(ledRec, 0); RecState = 0;}//REC OFF

//     if (currentScene == '1' ) {analogWrite(ledStream, 0);analogWrite(ledRec, 255); OldTally = 1;}
//     if (currentScene == '5' ) {OldTally = 0;}
//     if (currentScene == '6' && OldTally == 1 ) {analogWrite(ledStream, 255);analogWrite(ledRec, 255);}
//     if (currentScene == '6' && OldTally == 0 ) {analogWrite(ledStream, 255);analogWrite(ledRec, 0);}


     
     if (currentScene == '1' ) {digitalWrite(ledTallyPrev, LOW);digitalWrite(ledTallyPlay, HIGH); OldTally = 1;} // Tally Speaker LED ON-AIR 
     if (currentScene == '5' ) {OldTally = 0; } // Tally Speaker LED OFF Preview
     if (currentScene == 'n' && OldTally == 0 ){digitalWrite(ledTallyPrev, LOW);digitalWrite(ledTallyPlay, LOW);}// Tally Speaker LED OFF
     if (currentScene == '6' && OldTally == 0 ) {digitalWrite(ledTallyPrev, HIGH);digitalWrite(ledTallyPlay, LOW);}// Tally Speaker LED On Preview

     
   }
}
