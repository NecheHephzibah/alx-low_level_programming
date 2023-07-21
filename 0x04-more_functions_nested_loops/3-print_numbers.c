#include "main.h"

/**
* print_numbers - prints the numbers 0 - 9.
*
* Return: Always 0.
*/


void print_numbers(void)
{
	int mib = '0';

	while (mib < '9')
	{
		_putchar(mib);
		mib++;
	}
	_putchar('\n');
}
