#include <math.h>
#include "main.h"
#include <stdio.h>

int highestBitPosition(unsigned long int n);

/**
 * print_binary - converts decimal to binary.
 * @n: the binary the user will input.
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int position;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	position = highestBitPosition(n);

	for (i = position - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}

/**
 * highestBitPosition - checks for the highest position where 1 can be found
 * @n: the input that will be checked.
 * Return: pos to the function calling it above.
 */

int highestBitPosition(unsigned long int n)
{
	double logTwoN;
	int floorLogTwoN;
	int pos;

	if (n <= 0)
	{
		return (-1);
	}

	logTwoN = log(n) / log(2);

	floorLogTwoN = (int) logTwoN;

	pos = floorLogTwoN + 1;

	return (pos);
}

