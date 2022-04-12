/*
 * schedular.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmedgho
 */
#include "../MCAL/TIMER_one.h"
#include <avr/io.h>


#ifndef SCHEDULAR_H_
#define SCHEDULAR_H_

extern void schudular_init(void);
extern void schudular_start(void);
extern void schudular_2ms_task(void(*ptr)(void));
extern void schudular_5ms_task(void(*ptr)(void));
extern void schudular_10ms_task(void(*ptr)(void));
extern void schudular_100ms_task(void(*ptr)(void));
extern void schudular_1000ms_task(void(*ptr)(void));


#endif /* SCHEDULAR_H_ */
