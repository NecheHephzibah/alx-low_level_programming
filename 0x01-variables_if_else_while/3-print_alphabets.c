#include <stdio.h>


/**
 * main - Entry point of the program,
* initializes inputs mib and bim to print out
*the alphabeth in lowercase and uppercase.
 *
 * Return: Always 0 (Success).
 */


int main(void)
{
	char mib = 'a';
	char bim = 'A';

	while (mib <= 'z')
	{
		putchar(mib);
		mib++;
	}

	while (bim <= 'Z')
	{
		putchar(bim);
		bim++;
	}

	putchar('\n');

	return (0);
}
