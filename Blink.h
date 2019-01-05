/*
    Blink - A simple library for blinking an output pin.
    Created by Reed Simon, Dec 25, 2018.
    Modified Jan 5, 2019
    Released under the MIT License.
*/

#ifndef BLINK_HEADER
#define BLINK_HEADER

#include "Arduino.h"

// ALL INTERVALS ARE IN ms
class Blink {
   public:
    Blink(int pin = 13, int onInterval = 1000, int offInterval = 0);
    void startBlink();
    void setOnInterval(int onInterval);
    void setOffInterval(int offInterval);
    int getOnInterval();
    int getOffInterval();

   private:
    int _pin;
    int _onInterval;
    bool _equalTime;
    int _offInterval;
};

#endif