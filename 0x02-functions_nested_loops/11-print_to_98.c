#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
    int increment = 1;

    if (n > 98)
    {
		increment = -1;
	}

	while (n != 98)
	{
		if (n < 10)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}

		_putchar(',');
		_putchar(' ');

		n += increment;
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
