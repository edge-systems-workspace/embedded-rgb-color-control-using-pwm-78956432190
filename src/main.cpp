/**
 * @file LDR_Light_Measurement.ino
 * @brief Light intensity measurement using LDR sensor.
 *
 * This program reads analog values from an LDR (Light Dependent Resistor)
 * connected to analog pin A0. The raw analog value (0–1023) is converted
 * into a percentage (0–100%) to represent light intensity.
 * The values are displayed on the Serial Monitor.
 *
 * @author Khushi Singh
 * @date 19 Feb 2026
 */
// Pin definitions for RGB LED
int red_led = 10;    ///< Red LED connected to digital pin 10
int green_led = 9;   ///< Green LED connected to digital pin 9
int blue_led = 11;   ///< Blue LED connected to digital pin 11
