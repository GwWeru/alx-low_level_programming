#include <stdio.h>



void print_something(void) __attribute__ ((constructor));



/**
 * print_something - prints a msg before the main
 * Return: 0
 */



void print_something(void)

{

		printf("I left my chills in the Kalahari.\n");
		return 0;

}
