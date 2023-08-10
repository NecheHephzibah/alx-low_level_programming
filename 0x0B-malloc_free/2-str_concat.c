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

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	size = strlen(s1) + strlen(s2) + 1;

	zen = (char *) malloc(size * sizeof(char));

	if (zen == NULL)
	{
		return (NULL);
	}

	strcpy(zen, s1);
	strcat(zen, s2);

	return (zen);
}
