#include "waves.h"



const int button1 = 2; //button at digital pin 2
const int button2 = 3;
const int button3 = 4;

boolean pushed = false;

int t_knobVal; //value of knob read from potentiometer
int knobVal;

void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  analogWriteResolution(12);
  analogReadResolution(12);
}

void loop() {
  
  //for(int j = 0; j < 50; j++){ // this config gives us a sick gameboy drum beat

 if(digitalRead(button1) == LOW){ //button 1 
    playKey(1); //90 for mary had a lil
  }
 else if(digitalRead(button2) == LOW){ //button 1 
    playKey(2); //100 for mary had a lil
  }
 else if(digitalRead(button3) == LOW){ //button 1 
    playKey(3); //113 for mary had a lil
   }
 }


void playKey(int delayTime){
  int j = 0;
  for(int i=0; i<271*delayTime; i++) { //
    j = i/delayTime;
    analogWrite(DAC0, bassTable[j]);//sin table
    delayMicroseconds(0); //determines the frequency of the sine wav
    
  }
}
//end

