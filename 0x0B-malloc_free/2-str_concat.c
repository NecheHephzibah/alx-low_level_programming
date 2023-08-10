#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* str_concat - function that concatenates two strings
* and allocates memory space to the concatenated strings
* @s1: first string
* @s2: second string
* Return: pointer to the string
*/

char *str_concat(char *s1, char *s2)
{
	int size;
	char *zen;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	size = (s1 != NULL ? strlen(s1) : 0) + (s2 != NULL ? strlen(s2) : 0) + 1;

	zen = (char *) malloc(size * sizeof(char));

	if (zen == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strcpy(zen, s1);
	}
	if (s2 != NULL)
	{
		strcat(zen, s2);
	}

	return (zen);
}
