#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Akshat Lakhotiya
 * @date 2026-02-20
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */
#define ldrPin A3


void setup() {
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
    Serial.println("LDR Test");

}

void loop() {
    int ldrRaw = analogRead(ldrPin);
    int lightPercent = map(ldrRaw, 0, 1023, 0, 100);

    Serial.print("Light Raw: ");
    Serial.print(ldrRaw);
    Serial.print(" | Light: ");
    Serial.print(lightPercent);
    Serial.println("%");

    delay(500);

}
