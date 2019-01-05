#include "Blink.h"

Blink blinker(12, 300, 100);

void setup() {}

void loop() {
    // put your main code here, to run repeatedly:
    blinker.startBlink();
}
