/*
    Blink - A simple library for blinking an output pin.
    Created by Reed Simon, Dec 25, 2018.
    Modified Jan 5, 2019
    Released under the MIT License.
*/

#include "Blink.h"
#include "Arduino.h"

// Initialize the constructor with default values, offInterval defaults to 0
Blink::Blink(int pin = 13, int onInterval = 1000, int offInterval = 0) {
    // if the user doesn't specify offInterval, it's left at 0
    // the library assumes in this case the user wants equal on and off times
    if (offInterval == 0) {
        pinMode(pin, OUTPUT);
        _pin = pin;
        _onInterval = onInterval;
        _offInterval = onInterval;
    } else {
        pinMode(pin, OUTPUT);
        _pin = pin;
        _onInterval = onInterval;
        _offInterval = offInterval;
    }
}

// Starts blinking using the onInterval and offInterval on pin
void Blink::startBlink() {
    digitalWrite(_pin, HIGH);
    delay(_onInterval);
    digitalWrite(_pin, LOW);
    delay(_offInterval);
}

// Sets/Updates the onInterval
void Blink::setOnInterval(int onInterval) {
    _onInterval = onInterval;
}

// Sets/Updates the offInterval
void Blink::setOffInterval(int offInterval) {
    _offInterval = offInterval;
}

// Returns the current onInterval as an int
int Blink::getOnInterval() {
    if (_onInterval)
        return _onInterval;
}

// Returns the current offINterval as an int
int Blink::getOffInterval() {
    if (_offInterval)
        return _offInterval;
}
