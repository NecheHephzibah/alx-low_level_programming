#include "main.h"


/**
* _islower - Entry point. function checking for
* lowercase letters.
*
* Return: 0  (Success)
*
*/



int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}

	_putchar('\n');

	return (0);
}
