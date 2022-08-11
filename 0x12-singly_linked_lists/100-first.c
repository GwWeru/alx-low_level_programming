#include <stdio.h>



void print_something(void) __attribute__ ((constructor));



/**
 * print_something - prints a msg before the main
 */



void print_something(void)

{

		printf("I left my chills,\n"
				"in the Kalahari.\n");

}
