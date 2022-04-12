/*
 * TIMER_one.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmedgho
 */
#include "../SERVISE_LAYER/std_types.h"
#include <avr/io.h>

#ifndef TIMER_ONE_H_
#define TIMER_ONE_H_

#define _1ms_period (1000UL)

extern void TIMER_init(void);
extern void TIMER_start(uint16 ctc_comp);
extern void TIMER_stop(void);
extern uint16 TIMER_reading(void);
extern void TIMER_clear(void);
extern void TIMER_set_cbk(void(*cbk)(void));


#endif /* TIMER_ONE_H_ */
