/*
 * schudular.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmedgho
 */
#include "../MCAL/TIMER_one.h"
#include "schedular.h"

static volatile uint32 cnt=0;
void schudular_update(void);
void(*ptr_tasks[5])(void);

void schudular_init(void){
	TIMER_init();
	TIMER_set_cbk(schudular_update);

}
void schudular_start(void){

	TIMER_start(_1ms_period);

}

void schudular_2ms_task(void(*ptr)(void)){

	ptr_tasks[0] = ptr;

}

void schudular_5ms_task(void(*ptr)(void)){

	ptr_tasks[1] = ptr;


}

void schudular_10ms_task(void(*ptr)(void)){

	ptr_tasks[2] = ptr;


}

extern void schudular_100ms_task(void(*ptr)(void)){

	ptr_tasks[3] = ptr;

}

extern void schudular_1000ms_task(void(*ptr)(void)){

	ptr_tasks[4] = ptr;


}

void schudular_update(void){

	cnt++;

	if((cnt % 2) == 0){

		ptr_tasks[0]();
	}

	if((cnt % 5) == 0){

		ptr_tasks[1]();

		}

	if((cnt % 10) == 0){

		ptr_tasks[2]();
		}

	if((cnt % 100) == 0){

		ptr_tasks[3]();
		}

	if((cnt % 1000) == 0){

		ptr_tasks[4]();
		}

}







