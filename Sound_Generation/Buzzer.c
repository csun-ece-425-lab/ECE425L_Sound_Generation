/**
 * @file Buzzer.c
 *
 * @brief Source code for the Buzzer driver.
 *
 * This file contains the function definitions for the Buzzer driver.
 * It interfaces with the following:
 *	- DMT-1206 Magnetic Buzzer
 *
 * To verify the pinout of the user LED, refer to the Tiva C Series TM4C123G LaunchPad User's Guide
 * Link: https://www.ti.com/lit/pdf/spmu296
 *
 * @author Aaron Nanas
 */
 
#include "Buzzer.h"

// Constant definitions for the buzzer
const uint8_t BUZZER_OFF 		= 0x00;
const uint8_t BUZZER_ON			= 0x10;

// Constant definitions for musical notes
const double C4_NOTE = 261.6;
const double D4_NOTE = 293.7;
const double E4_NOTE = 329.6;
const double F4_NOTE = 349.2;
const double G4_NOTE = 392.0;
const double A4_NOTE = 440.0;
const double B4_NOTE = 493.0;

void Buzzer_Init(void)
{

}
 
void Buzzer_Output(uint8_t buzzer_value)
{

}

void Play_Note(double note, unsigned int duration)
{

}
