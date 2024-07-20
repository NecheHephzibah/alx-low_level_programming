#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the number
 * If value is not present in array or if array is NULL,
 * the function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double probe;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		probe = (double)(high - low) /
				(array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + probe);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[pos]);

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
