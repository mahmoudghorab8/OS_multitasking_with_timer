/*

 * TEMP_sensor.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmedgho
 */

#include "TEMP_sensor.h"

 void Temp_sensor_init(void){

ADC_init();


}

uint32 Temp_sensor_read(uint8 pin){

uint32 temp=0;
	ADC_start(pin);
	temp = ADC_read();
	temp *= 500 ;
	temp /=1023; // Volts

	return temp;
}

