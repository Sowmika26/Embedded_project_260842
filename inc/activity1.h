/**
 * @file activity1.h
 * @author 260842 -K.Nagasowmika
 * @brief
 * @version 0.1
 * @date 2021-04-23
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#include <avr/io.h>

#define SET_LED DDRB|=(1<<PB0)
/**
 * @breief macro to Set PORTB 0th bit as LED.
 *
 */

#define CLEAR_BUTTON_DATA DDRD&=~(1<<PD1)
/**
 * @brief macro to clear previous data in the register D1.
 *
 */

#define CLEAR_HEATER_DATA DDRD&=~(1<<PD2)
/**
 * @brief macro to clear previous data in the register D2.
 *
 */

#define PULLUP_BUTTON PORTD|=(1<<PD1)
/**
 * @brief macro to Set PORTD 0th bit as Button sensor.
 *
 */

#define PULLUP_HEATER PORTD|=(1<<PD2)
/**
 * @brief  macro to Set PORTD 1st bit as Heater.
 *
 */
#define BUTTON_ON (PIND&(1<<PD1))
/**
 * @brief macro to Set PIND 0th pin it checks if the button is pressed or not.
 *
 */

#define HEATER_ON (PIND&(1<<PD2))
/**
 * @brief macro to Set PIND 1st pin it checks if the button is pressed or not.
 *
 */

#define SET_LED_ON PORTB|=(1<<PB0)
/**
 * @brief macro to Set the LED PORTB 0th port.
 *
 */

#define SET_LED_OFF PORTB&=~(1<<PB0)
/**
 * @brief macro to clear the LED PORTB 1st port.
 *
 */


void activity1();



#endif // ACTIVITY1_H_INCLUDED

