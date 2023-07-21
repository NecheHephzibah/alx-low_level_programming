#include "main.h"


/**
* print_most_numbers - prints numbers 0 - 9
* except 2 and 4.
* Return: Always 0.
*/

void print_most_numbers(void)
{
	char mib = '0';

	while (mib <= '9')
	{
		if (!(mib == '2' || mib == '4'))
		{
			_putchar(mib);
		}
		mib++;
	}
	_putchar('\n');
}
