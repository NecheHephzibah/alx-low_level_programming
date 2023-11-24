#include "main.h"

/**
 * get_bit - returns the value of a bit at a particular index
 * @n: user input.
 * @index: used to iterate through to get bit.
 * Return: an integer.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned long int bit;

	if (index > 63)
		return (-1);

	mask = 1UL << index;
	bit = n & mask;

	if (bit)
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
