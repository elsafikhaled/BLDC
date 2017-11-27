/*
 * External_inter.c
 *
 *  Created on: ٢٧‏/١١‏/٢٠١٧
 *      Author: El-safi
 */

#include "External_inter.h"
#include "avr/io.h"

void External_Inter_Setup(void){//! start setup.
// interrupt1 is falling - interrupt0 falling
MCUCR=(1<<ISC11)|(1<<ISC01);

// important notes to Setup interrupt2 mode:- interrupt 2 falling.
// 1-clear flag bit for interrupt2 ? changing ISC2 bit may fire undemanded interrupt.
GICR &=~(1<<INT2);
// now change ISC2
MCUCSR &=~(1<<ISC2);

//Enable all flags.
GICR=(1<<INT0)|(1<<INT1)|(1<<INT2);

}//! End of INT setup.
