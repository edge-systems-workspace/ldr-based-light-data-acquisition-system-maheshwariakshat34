#include <Arduino.h>
/**
gi * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using an LDR (Light Dependent Resistor)
 * @author Akshat Lakhotiya
 * @date 2026-02-20
 * @version 1.0
 *
 * @details
 * This sketch reads raw analog brightness values from an LDR and converts them
 * to a percentage value suitable for display over the Serial Monitor.
 *
 * Hardware connections (typical):
 *  - LDR connected in a voltage divider configuration to an analog input (A3)
 *  - Other side of divider connected to 5V and GND accordingly
 *
 * Notes:
 *  - The ADC on most AVR-based Arduinos returns a value in the range 0..1023.
 *  - The conversion from raw ADC value to percentage uses Arduino's map()
 *    with the input range 0..1023 mapped to 0..100.
 *  - Serial output uses 9600 baud and prints a compact, parseable line for
 *    each sample in the format: "Light Raw: <raw> | Light: <percent>%".
 *
 * Example output:
 *  Light Raw: 512 | Light: 50%
 *
 * Usage:
 *  - Open the Serial Monitor at 9600 baud to view the continuous readings.
 *  - Adjust the analog pin macro below if your LDR is connected to a
 *    different analog input.
 */

/**
 * @def ldrPin
 * @brief Analog pin connected to the LDR voltage divider.
 *
 * Change this macro if the sensor is connected to a different analog pin.
 */
#define ldrPin A3


/**
 * @brief Initialize peripherals used by the sketch.
 *
 * This function configures the Serial port at 9600 baud for human- and
 * machine-readable output and sets the LDR pin as an input. No parameters
 * or return values.
 *
 * @note Must be called once at startup by the Arduino runtime.
 */
void setup() {
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
    Serial.println("LDR Test");

}


/**
 * @brief Main sampling loop. Reads the LDR and prints formatted output.
 *
 * Steps performed:
 *  1. Reads the raw ADC value from the configured analog pin using
 *     analogRead(ldrPin). The returned value is typically in the range
 *     [0, 1023] on 10-bit ADC Arduinos.
 *  2. Maps the raw ADC value to a percentage via map(raw, 0, 1023, 0, 100).
 *  3. Prints the raw value and the computed percentage to Serial in a
 *     compact single-line format so the output is easy to parse by a
 *     host computer or log viewer.
 *  4. Waits 500ms before the next sample to reduce serial flooding.
 *
 * @note The mapping performed is linear and does not account for the
 *       non-linear response of the LDR or the resistor network—calibration
 *       may be required for accurate lux measurements.
 *
 * @return None
 */
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
