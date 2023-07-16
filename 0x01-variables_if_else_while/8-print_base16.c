#include <stdio.h>

/**
 * main - Entry point of the program.
 * Prints numbers from 0 to 9 followed by letters
* from 'a' to 'f' on the same line.
 *
 * Return: Always 0 (Success).
 */


int main(void)
{
	int tat = 0;
	char mib = 'a';

	while (tat < 10)
	{
		putchar(tat + '0');
		tat++;
	}

	while (mib < 'g')
	{
		putchar(mib);
		mib++;
	}

	putchar('\n');

	return (0);
}
