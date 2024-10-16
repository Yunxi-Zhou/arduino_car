#include "line_tracking.h"

void set_tracking() {
    pinMode(sensorPin, INPUT);
}

void loop_tracking() {
    int sensorValue = analogRead(sensorPin);
    if (sensorValue > 500) {

    } else {
        
    }
}