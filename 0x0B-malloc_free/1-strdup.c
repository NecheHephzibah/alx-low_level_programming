#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _strdup - function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter.
* @str: The string to be copied.
* Return: a pointer to the duplicated string.
*/

char *_strdup(char *str)
{
	int size;
	char *new_string;

	if (str == NULL)
		return (NULL);

	size = strlen(str) + 1;
	new_string = (char *) malloc(size * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	strcpy(new_string, str);

	return (new_string);
}
