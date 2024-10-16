#include <Arduino.h>
#include "ultrasonic_sensor.h"
#include <Ultrasonic.h>

Ultrasonic ultrasonic(12, 13); // Trigger pin 12, Echo pin 13

void set_ultrasonic() {
    Serial.begin(9600);
}

void loop_ultrasonic() {
    long distance = ultrasonic.distanceRead(CM);
    if (distance < 20) {

    }
}