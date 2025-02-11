#include <iostream>
// Define stepper motor connections and steps per revolution:
#define dirPin 5
#define stepPin 6
#define stepsPerRevolution 800
#define dirPin2 9
#define stepPin2 10
void setup() {
    // Declare pins as output:
    pinMode(stepPin, OUTPUT);
    pinMode(dirPin, OUTPUT);
    pinMode(stepPin2, OUTPUT);
    pinMode(dirPin2, OUTPUT);
}


void loop() {


    // Set the spinning direction clockwise:
    digitalWrite(dirPin, HIGH);
    digitalWrite(dirPin2, HIGH);






    // Spin the stepper motor 1 revolution quickly:
    for (int i = 0; i < stepsPerRevolution; i++) {
        // These four lines result in 1 step:
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(500);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(500);
    }
    // Spin the stepper motor2 1 revolution quickly:
    for (int i = 0; i < stepsPerRevolution; i++) {
        // These four lines result in 1 step:
        digitalWrite(stepPin2, HIGH);
        delayMicroseconds(500);
        digitalWrite(stepPin2, LOW);
        delayMicroseconds(500);
    }






    // Set the spinning direction counterclockwise:
    digitalWrite(dirPin, LOW);
    digitalWrite(dirPin2, LOW);






    // Spin the stepper motor 1 revolution quickly:
    for (int i = 0; i < stepsPerRevolution; i++) {
        // These four lines result in 1 step:
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(500);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(500);
    }
    // Spin the stepper motor2 1 revolution quickly:
    for (int i = 0; i < stepsPerRevolution; i++) {
        // These four lines result in 1 step:
        digitalWrite(stepPin2, HIGH);
        delayMicroseconds(500);
        digitalWrite(stepPin2, LOW);
        delayMicroseconds(500);
    }







}

