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
	int tat = 0;
	char mib = 'a';
	char bim = 'A';

	while (tat < 26)
	{
		putchar(mib);
		putchar(bim);
		mib++;
		bim++;
		tat++;
	}

	putchar('\n');

	return (0);
}
