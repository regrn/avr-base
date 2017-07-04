#include <stdlib.h>
#include <avr/io.h>

int main(void)
{
	DDRB |= (1<<PB3);	//set pin 3 on Port B as output
	PORTB |= (1<<PB3);  //set pin 3 on Port B on "high"

	while(1)
	{
		
	}//end of while
	
    return 0;
}//end of main

















