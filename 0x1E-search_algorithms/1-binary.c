#include "search_algos.h"

/**
  * binary_search - function that searches for a value in a sorted array of
  * integers using the Binary search algorithm.
  * @array: pointer to the first element in the array to search in
  * @size: The number of element in the array
  * @value: The target to search for
  * Return: index of the target value
  */

int binary_search(int *array, size_t size, int value)
{
	size_t n, side_a, side_b;

	if (array == NULL)
		return (-1);

	for (side_a = 0, side_b = size - 1; side_b >= side_a;)
	{
		printf("Searching in array: ");
		for (n = side_a; n < side_b; n++)
			printf("%d, ", array[n]);
		printf("%d\n", array[n]);

		n = side_a + (side_b - side_a) / 2;
		if (array[n] == value)
			return (n);
		if (array[n] > value)
			side_b = n - 1;
		else
			side_a = n + 1;
	}

	return (-1);
}
