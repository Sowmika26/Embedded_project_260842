/**
 * @file activity3.c
 * @author 260842 -K.Nagasowmika
 * @brief
 * @version 0.1
 * @date 2021-04-23
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "activity3.h"
#include <avr/io.h>
#include <util/delay.h>

void activity3(void){

    SET_TIMER1A; // To Set Timer1A which is as fast as PWM.
    PRESCALER_64; //prescalar as 64
    SET_PWM; //To Set PWM as Output

}

char PWMoutput(uint16_t ADC_Value){

    if((ADC_Value>=0) && (ADC_Value<=200)){

        OCR1A = 204;   //20% duty cycle
        _delay_ms(20);
        return 'a';
    }
    else if((ADC_Value>=210) && (ADC_Value<=500)){

        OCR1A = 409;    //40% duty cycle
        _delay_ms(20);
       return 'b';
    }
    else if((ADC_Value>=510) && (ADC_Value<=700)){

        OCR1A = 716;   //70% duty cycle
        _delay_ms(20);
        return 'c';
    }
    else if((ADC_Value>=710) && (ADC_Value<=1024)){

        OCR1A = 980;   //95% duty cycle
        _delay_ms(20);
        return 'd';
    }

}
