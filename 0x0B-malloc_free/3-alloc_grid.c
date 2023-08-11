#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - function that returns a pointer
* to a 2 dimensional array of integers.
* @width: representing the row of the 2D array
* @height: representing the column of the 2D array
* Return: arr*
*/

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
