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


/**
 * @brief of activity3
 *
 */
 void activity3(void){

    SET_TIMER1A; // To Set Timer1A which is as fast as PWM.
    PRESCALER_64; //prescalar as 64
    SET_PWM; //To Set PWM as Output

}

<<<<<<< HEAD
/**
 * @brief
 *
 * @param ADC_Value
 */
 void PWMoutput(uint16_t ADC_Value){
    int i;
    char temperature[10];

    if((ADC_Value>=0) && (ADC_Value<=200)){

	OCR1A = 170; //20% duty cycle
        temperature[0] = '2';
        temperature[1] = '0';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<=5;i++){
            UARTwritecharacter(temperature[i]);
        }
=======
char PWMoutput(uint16_t ADC_Value){

    if((ADC_Value>=0) && (ADC_Value<=200)){

        OCR1A = 204;   //20% duty cycle
>>>>>>> 10e6761d1ea8c81fd6eab04737eb913e73a279a8
        _delay_ms(20);
        return 'a';
    }
    else if((ADC_Value>=210) && (ADC_Value<=500)){

<<<<<<< HEAD
        OCR1A = 390;    //40% of duty cycle
	temperature[0] = '2';
        temperature[1] = '5';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<5;i++){
            UARTwritecharacter(temperature[i]);
        }
=======
        OCR1A = 409;    //40% duty cycle
>>>>>>> 10e6761d1ea8c81fd6eab04737eb913e73a279a8
        _delay_ms(20);
       return 'b';
    }
    else if((ADC_Value>=510) && (ADC_Value<=700)){

<<<<<<< HEAD
        OCR1A = 670;   //80% of duty cycle
	temperature[0] = '2';
        temperature[1] = '9';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<=5;i++){
            UARTwritecharacter(temperature[i]);
        }
=======
        OCR1A = 716;   //70% duty cycle
>>>>>>> 10e6761d1ea8c81fd6eab04737eb913e73a279a8
        _delay_ms(20);
        return 'c';
    }
    else if((ADC_Value>=710) && (ADC_Value<=1024)){

<<<<<<< HEAD
        OCR1A = 970;   //100% of duty cycle
	temperature[0] = '3';
        temperature[1] = '3';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<=5;i++){
            UARTwritecharacter(temperature[i]);
        }
        _delay_ms(20);
    }
    else{
        OCR1A = 0;  //0% of duty cycle
	temperature[0] = 'O';
        temperature[1] = 'F';
        temperature[2] = 'F';
        temperature[3] = ' ';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<=5;i++){
            UARTwritecharacter(temperature[i]);
        }
	_delay_ms(20);
=======
        OCR1A = 980;   //95% duty cycle
        _delay_ms(20);
        return 'd';
>>>>>>> 10e6761d1ea8c81fd6eab04737eb913e73a279a8
    }

}
