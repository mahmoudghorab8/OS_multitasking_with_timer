/*
 * TEMP_sensor.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmedgho
 */

#ifndef TEMP_SENSOR_H_
#define TEMP_SENSOR_H_

#include <avr/io.h>
#include "../MCAL/ADC.h"
#include "../SERVISE_LAYER/std_types.h"


extern void Temp_sensor_init(void);

extern uint32 Temp_sensor_read(uint8 pin);



#endif /* TEMP_SENSOR_H_ */
