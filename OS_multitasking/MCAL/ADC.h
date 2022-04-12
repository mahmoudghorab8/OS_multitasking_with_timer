/*
 * ADC.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmedgho
 */

#include<avr/io.h>
#include "../SERVISE_LAYER/std_types.h"
#ifndef ADC_H_
#define ADC_H_

extern void ADC_init(void);
void ADC_start(uint8 pin);
f32 ADC_read(void);


#endif /* ADC_H_ */
