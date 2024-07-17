
#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: ponter to the first element of the array
 * @size: the number of elements in the array
 * @value: the target to search for
 * Return: the first index where the target is located.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
	{
		return (-1);
	}

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (1);
	}
	return (-1);
}
