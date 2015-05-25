#ifndef BUTTON_H
#define BUTTON_H

// Ardumower ON/start button 

#include <Arduino.h>


class ButtonControl
{
  public:    
    int beepCounter;
    ButtonControl();    
    void run();
    void setup();    
    bool pressed();    
    void resetBeepCounter();
    void setBeepCount(int count);
  private:    
    int tempBeepCounter;
    unsigned long nextButtonTime;    
};


extern ButtonControl Button;  

  
#endif
