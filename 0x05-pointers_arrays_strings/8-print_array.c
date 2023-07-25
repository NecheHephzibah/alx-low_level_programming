#include <stdio.h>
#include "main.h"

/**
* print_array -  function that prints n elements of
* an array of integers, followed by a new line.
* @a: a array, passed as parameter.
* @n: number of element in the array.
* Return: void.
*/

void print_array(int *a, int n)
{
	int length = 0;

	while (length < n - 1)
	{
		printf("%d, ", a[length]);
		length++;
	}
	if (n > 0)
	{
		printf("%d\n", a[length]);
	}
}
