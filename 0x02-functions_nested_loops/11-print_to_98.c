#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: The starting number.
 */


void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n / 100 + '0');
			_putchar((n % 100) / 10 + '0');
			_putchar(n % 10 + '0');

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}	

			if (n == 98)
			{
				break;
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			_putchar(n / 100 + '0');
			_putchar((n % 100) / 10 + '0');
			_putchar(n % 10 + '0');

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (n == 98)
			{
				break;
			}
			n--;
		}
	}

	_putchar('\n');
}

