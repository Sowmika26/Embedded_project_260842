/**
 * @file Activity1.c
 * @author KURRA NAGASOWMIKA(sowmikasandy62@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD1);
    DDRD&=~(1<<PD2);

    PORTD|=(1<<PD1);
    PORTD|=(1<<PD2);

    while(1){
        if(!((PIND&(1<<PD1)) || (PIND&(1<<PD2)))){
            PORTB|=(1<<PB0);
            _delay_ms(20);
        }
        else{
             PORTB&=~(1<<PB0);
            _delay_ms(20);
        }
    }

    return 0;
}

