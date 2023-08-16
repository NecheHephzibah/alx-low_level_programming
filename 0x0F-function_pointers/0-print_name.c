#include "function_pointers.h"
#include <stdio.h>



/**
* print_name - the given function prints a name
* @name: the name to be printed as a string
* @f: pointer to the function
* Return: void
**/


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}

