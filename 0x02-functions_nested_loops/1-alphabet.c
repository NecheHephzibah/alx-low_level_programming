#include "main.h"


/**
* void - Entry point to the program.
*
* Description: program that prints out the alphabeth
* in lowercase.
*
* Return: Always 0 (Success.
*
*/



void print_alphabet(void) /* function that prints alphabet a-z.*/
{
	char mib = 'a';
	int bim = 0;

	while (bim < 26)
	{
		_putchar(mib);
		mib++;
		bim++;
	}

	_putchar('\n');

}
