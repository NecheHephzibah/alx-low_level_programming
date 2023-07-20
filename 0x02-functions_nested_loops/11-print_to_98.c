#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: The starting number.
 */

void print_to_98(int n)
{

	int increment;

	if (n <= 98)
	{

		increment = 1;


		while (n != 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}

			n += increment;
		}	
	}
	else
	{
		increment = -1;
		while (n >= 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');

			}
			n += increment;
		}
	}
	_putchar('\n');

}
