#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - this is a function that executes a
* function given as a parameter on each element of an array.
* @array: array
* @size: the size of the array
* @action: a pointer to the function you need to use
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int mib;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (mib = 0; mib < size; mib++)
	{
		action(array[mib]);
	}
}
