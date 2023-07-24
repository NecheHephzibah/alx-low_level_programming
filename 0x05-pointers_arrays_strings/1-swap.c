#include "main.h"

/**
* swap_int - function that swaps the values of two integers.
* @a: takes a pointer to the first int.
* @b: takes a pointer to the second int.
* Return: 0.
*/



void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
