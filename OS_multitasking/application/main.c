/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmedgho
 */

#include "../HAL/TEMP_sensor.h"
#include "../SERVISE_LAYER/schedular.h"

#include "../SERVISE_LAYER/std_types.h"
#include <util/delay.h>

static volatile uint32 Temp=0;
void task_2ms_(void){



}

void task_5ms_(void){

}

void task_10ms_(void){

}

void task_100ms_(void){

}

void task_1000ms_(void){

	Temp =Temp_sensor_read(3);

	if (Temp<30){

		PORTC |=(1<<PC5);

	}
	else{
		PORTA ^=(1<<PA6);
	}

}

int main (void){

	DDRC = (1<<PC5);
	DDRA |= (1<<PA6);

Temp_sensor_init();

	schudular_init();
	schudular_2ms_task(task_2ms_);
	schudular_5ms_task(task_5ms_);
	schudular_10ms_task(task_10ms_);
	schudular_100ms_task(task_100ms_);
	schudular_1000ms_task(task_1000ms_);

schudular_start();

while (1){

}

return 0;
}
