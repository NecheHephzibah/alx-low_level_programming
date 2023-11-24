#include <stdio.h>
#include "main.h"

/**
 * print_binary - converts decimal to binary.
 * @n: the binary the user will input.
 * Return: void.
 */


void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int position;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	position = 0;

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			_putchar('1');
			position = 1;
		}
		else if (position)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

	if (!position)
	{
		_putchar('0');
	}
}
