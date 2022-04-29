void LedBeatStream(){
   unsigned long currentMillis = millis();
  
         if(currentMillis - previousMillisledStream > (SpeedValueStream)) {     
          previousMillisledStream = currentMillis;  // save the last time we send output value.
          int brightnessStream = 0; //
          brightnessStream = pow (2, (StepCounterStream / RStream)) - 1; // Calculate the required PWM value for this interval StepCounter
      if (StreamState == 1 ){analogWrite(ledStream, brightnessStream);}  // Set the LED output to the calculated brightness 

         
         
          if (ToggleSenseStream==0){
          //StepCounter++; //increment the StepCounter 
          StepCounterStream+=1.5; //increment the StepCounter twice the speed of decrease time
          if (StepCounterStream==PwmIntervalsStream || brightnessStream==HighOffsetStream) ToggleSenseStream=1;} // LED at maximum, it's time to fade out... 
             
         if (ToggleSenseStream==1){
         delay (SpeedValueStream*5);
         ToggleSenseStream=2;} // but we stop an extra little time at LED max brightness, and then go fade out ... 
         
         
          if (ToggleSenseStream==2){
          StepCounterStream--; //decrement the StepCounter until LowOffset
          if (StepCounterStream==0 || brightnessStream<=LowOffsetStream) ToggleSenseStream=0;} // LED at minimum, it's time to fade in 
          
   }

}

void LedBeatRec(){
   unsigned long currentMillis = millis();
  
         if(currentMillis - previousMillisLedRec > (SpeedValueRec)) {     
          previousMillisLedRec = currentMillis;  // save the last time we send output value.
          int brightnessRec = 0; //
          brightnessRec = pow (2, (StepCounterRec / RRec)) - 1; // Calculate the required PWM value for this interval StepCounter
      if (RecState == 1 ){analogWrite(ledRec, brightnessRec);}  // Set the LED output to the calculated brightness 

         
         
          if (ToggleSenseRec==0){
          //StepCounter++; //increment the StepCounter 
          StepCounterRec+=1.5; //increment the StepCounter twice the speed of decrease time
          if (StepCounterRec==PwmIntervalsRec || brightnessRec==HighOffsetRec) ToggleSenseRec=1;} // LED at maximum, it's time to fade out... 
             
         if (ToggleSenseRec==1){
         delay (SpeedValueRec*5);
         ToggleSenseRec=2;} // but we stop an extra little time at LED max brightness, and then go fade out ... 
         
         
          if (ToggleSenseRec==2){
          StepCounterRec--; //decrement the StepCounter until LowOffset
          if (StepCounterRec==0 || brightnessRec<=LowOffsetRec) ToggleSenseRec=0;} // LED at minimum, it's time to fade in 
          
   }

}
