#include "main.h"

/**
 * set_bit - function that sets the value if a bit to 1.
 * @n: pointer to the value the user will input.
 * @index: iterates through the value bit by bit.
 * Return: an integer 1, -1 if it doesn't work.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
