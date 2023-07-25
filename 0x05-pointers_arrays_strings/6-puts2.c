#include "main.h"


/**
* puts2 - function that prints every other character of a string,
* starting with the first character, followed by a new line.
* @str: input string
* Return: 0.
*/


void puts2(char *str)
{
	int length = 0;
	int t = 0;
	char *j = str;
	int k;

	while (*j != '\0')
	{
		j++;
		length++;
	}
	t = length - 1;

	for (k = 0; k <= t; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
