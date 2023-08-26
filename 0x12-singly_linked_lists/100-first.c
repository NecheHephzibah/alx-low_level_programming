#include "lists.h"

void initializer(void) __attribute__ ((constructor));

/**
* initializer - function that executes before the main function
*/

void initializer(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

