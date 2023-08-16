#include "function_pointers.h"


/**
* int_index - a function that searches for an integer.
* @array: array
* @size: is the number of elements in the array
* @cmp: pointer to func of one of the 3 in main,
* can also say  is a pointer to the function to be
* used to compare values
* Return: 0
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	int mib;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (mib = 0; mib < size; mib++)
	{
		if (cmp(array[mib]))
		{
			return (mib);
		}
	}
	return (-1);
}
