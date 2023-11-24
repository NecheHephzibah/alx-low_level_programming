#include "main.h"

/**
 * get_endianness - function that checks the endianness of a system
 * Return: integer value.
 */

int get_endianness(void)
{
	unsigned int x;
	char *y;

	x = 1;
	y = (char*)&x;

	if (*y)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
