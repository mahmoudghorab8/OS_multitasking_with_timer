/*
 * ADC.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmedgho
 */


#include "ADC.h"

void ADC_init(void){
 ADMUX =(1<<REFS0);
 ADCSRA = (1<<ADEN)|(1<<ADPS2)|(1<<ADPS1);

 SREG|=(1<<7);

}
void ADC_start (uint8 pin){

	pin &= 0x07;
	ADMUX &= 0xE0;
	ADMUX |=pin;
	ADCSRA |=(1<<ADSC);





}
f32 ADC_read(void){
	return ADC;
}
