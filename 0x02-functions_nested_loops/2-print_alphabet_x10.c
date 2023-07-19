#include "main.h"

/**
* print_alphabet_x10 - Entry point to the program,
* prints alphabet a - z in lowercase ten times.
*
* Description: program that prints out the alphabeth
* in lowercase.
*
* Return: Always 0 (Success.
*
*/



void print_alphabet_x10(void)
{

	char miber = 'a';
	int hugo = '0';

	while (hugo < 10)
	{
		char laurent = miber;

		while (laurent <= 'z')
		{
			_putchar(laurent);
			laurent++;
		}
		_putchar('\n');
		miber++;
		hugo++;
	}
}


