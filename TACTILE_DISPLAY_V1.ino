//#include <Arduino_FreeRTOS.h>
//#include <semphr.h>

#include <WEBER_TACTILE_DISPLAY.h>

#include <Wire.h> //Include arduino Wire Library to enable to I2C
#include "WEBER_TACTILE_DISPLAY.h"


WEBER_TACTILE_DISPLAY TD; //Assign object for C++ class

unsigned long timestart,timeend,loadtime,playtime = 0; //used to store time

void setup() 
{

  delay(10);
  Serial.begin(9600);
  TD.begin(); 

  //TD.PLAY_MARIO();
  delay(20);
  TD.TCA_SCANNER();
}

void loop() 
{  
Serial.println("hi");
//  delay(1000);    // Delay allows waveform to play, and gives the user time to recognize the display
//  TD.TEST_TCA1(); // Test TCA1 - Outputs waveform onto 6 ports (0-5)
//  delay(1000);    // Delay allows waveform to play, and gives the user time to recognize the display



//  delay(1000);        // First delay gives user extra time to recognize the display from last repeated (main) loop
//  TD.PLAY_D_proto(); // Play Braille Char. "D"- Outputs waveform onto designated Tactile Display ports
//  delay(1000);        // Delay allows waveform to play, and gives the user time to recognize the display
//  TD.PLAY_A_proto(); // Play Braille Char. "A"- Outputs waveform onto designated Tactile Display ports
//  delay(1000);        // Delay allows waveform to play, and gives the user time to recognize the display
//  TD.PLAY_D_proto(); // Play Braille Char. "D"- Outputs waveform onto designated Tactile Display ports
//  delay(1000);        // Delay allows waveform to play, and gives the user time to recognize the display

//    delay(500);       // Delay allows waveform to play, and gives the user time to recognize the display
//    TD.PLAY_SIDE2SIDE();
//    
    //timestart = micros();
   // TD.LOAD_MAX36();
   // TD.PLAY_MAX36();

   // timeend = micros();
   // loadtime = timeend - timestart;
    //delay(100);
  //TD.PLAY_A_proto();
  delay(3000);
  //TD.PLAY_D_proto();
  TD.READ_WORD();
  TD.PLAY_WORD("TADC");
/*
    timestart = micros();
    TD.PLAY_MAX36();
    timeend = micros();
    playtime = timeend - timestart;

    Serial.print("load time = ");
    Serial.println(loadtime);
    Serial.print("Play time = ");
    Serial.println(playtime);
    Serial.print("Total time = ");
    Serial.println(loadtime + playtime);
    Serial.print("Refresh rate for both load and play = ");
    Serial.println(1/(loadtime+playtime));
    */
    // delay(3000); // Delay allows waveform to play, and gives the user time to recognize the display
 
      

}
