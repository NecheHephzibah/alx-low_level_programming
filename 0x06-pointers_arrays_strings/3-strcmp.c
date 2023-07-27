#include "main.h"
#include <string.h>

/**
* _strcmp - function that compares two strings.
* @s1: first buffer/string,
*
* @s2: the second string to used in comparison.
*.
* Return: si[i] - s2[i].
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
