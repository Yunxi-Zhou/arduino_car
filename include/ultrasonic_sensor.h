#ifndef ULTRASONIC_SENSOR_H
#define ULTRASONIC_SENSOR_H
#include <Ultrasonic.h>

Ultrasonic ultrasonic(12, 13); // Trigger pin 12, Echo pin 13

void set_ultrasonic();
void loop_ultrasonic();

#endif