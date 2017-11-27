/* **************************************
 * main.c
 *
 *  Created on: ٢٧‏/١١‏/٢٠١٧
 *      Author: El-safi
 * *************************************/
#include <avr/io.h>
#include <avr/interrupt.h>
#include "External_inter.h"


int main(void){//! Background.

//! System initialization.
    //start interrupt setup for system.
       External_Inter_Setup();
    //Enable global interrupt.
       sei();

	while(1){

            //Application here.
		    //Design:  - super loop + interrupt service routine
		    //Priority - Interrupt0 > interrupt1 > interrupt2

	}// end of super loop.

	return 0;

}//! End of main function.


//! foreground.

ISR(INT2_vect){//interrupt2 service routine

//code

//clear INT2F flag
 GIFR|=(1<<INTF2);

}//! End of service routine.


ISR(INT1_vect){//interrupt1 service routine

//code



}//! End of service routine.


ISR(INT0_vect){//interrupt0 service routine

//code



}//! End of service routine.





