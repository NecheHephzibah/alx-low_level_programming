#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - function that creates an array and
* returns a pointer to that array, capesh
* @size: size of the array
* @c: the array character itself
* Return: a pointer to the array whenthe function is called
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
