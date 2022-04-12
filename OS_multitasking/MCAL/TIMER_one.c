/*
 * TIMER_one.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmedgho
 */

#include "TIMER_one.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#ifndef NULL
#define NULL   ((void *) 0)
#endif

static void(*ptr)(void)=NULL;
 void TIMER_init(void){


	TCCR1A =(1<<FOC1A)|(1<<FOC1B);
	TCCR1B = (1<<WGM12);
	OCR1A = 0;
	OCR1B = 0;
	ICR1 = 0;
	TCNT1=0;
	TIMSK = (1<<OCIE1A);
	SREG = (1<<7);


}

 void TIMER_start(uint16 ctc_comp){

   TCCR1B |=(1<<CS11)|(1<<CS10);//clkI/64 (From prescaler)
   OCR1A = (ctc_comp/8UL);

}

  void TIMER_stop(void){

	 TCCR1B &=0xf8;

 }

  uint16 TIMER_reading(void){

	  return TCNT1;

  }

  void TIMER_clear(void){

	  TCNT1 = 0;

  }

  void TIMER_set_cbk(void(*cbk)(void)){

	  ptr=cbk;


  }

  ISR(TIMER1_COMPA_vect){

	  if(ptr != NULL){
		  ptr();
	  }
  }





