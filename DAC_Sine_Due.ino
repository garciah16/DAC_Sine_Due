#include "waves.h"

const int BUFFSIZE = 128;

int buff[BUFFSIZE]; //buffer to contain samples for proccessing

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
    playKey(221); //90 for mary had a lil (bassTable)
  }
 else if(digitalRead(button2) == LOW){ //button 1 
    playKey(185); //102 for mary had a lil (bassTable)
  }
 else if(digitalRead(button3) == LOW){ //button 1 
    playKey(164); //115 for mary had a lil (bassTable)
   }
 }


void playKey(float delayTime){
  int j = 0;
  for(int i=0; i<271; i++) { //
  //  bufferFill(bassTable);
    analogWrite(DAC0, bassTable[i]);//sin table
    delayMicroseconds(delayTime); //determines the frequency of the sine wav
    i+=3;
  }
}

void bufferFill(int * input)
{
  for(int i=0; i < BUFFSIZE; i++){
    buff[i] = *(input+i);
  }
}

//end

