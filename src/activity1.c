/**
 * @file activity1.c
 * @author 260842 - K.Nagasowmika
 * @brief
 * @version 0.1
 * @date 2021-04-23
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"

void activity1()
{
SET_LED; // set LED
CLEAR_BUTTON_DATA; //clear PORTD 1th bit.
PULLUP_BUTTON; //Set PortB 1th bit.
CLEAR_HEATER_DATA; //clear PORTD 2nd bit.
PULLUP_HEATER;// Set PortB 2nd bit.

}
