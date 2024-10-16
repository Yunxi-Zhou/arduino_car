#include <Arduino.h>
#include "ultrasonic_sensor.h"

void set_ultrasonic() {
    Serial.begin(9600);
}

void loop_ultrasonic() {
    long distance = ultrasonic.distanceRead(CM);
    if (distance < 20) {

    }
}