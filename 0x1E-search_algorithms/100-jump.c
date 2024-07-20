#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search for
 * @size: The number of elements in the array.
 * @value: The value to search.
 * Return: The first index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, previous, n;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	previous = 0;

	while (array[previous] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", previous, array[previous]);
		if (array[previous] == value)
			return (previous);
		if (previous >= size - 1)
			return (-1);
		previous += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			previous - step, previous);

	for (n = previous - step + 1; n <= previous && n < size; n++)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
	}

	return (-1);
}
