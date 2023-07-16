#include <stdio.h>

/**
 * main - Entry point of the program,
*initializes input mib and tat to print the
*alphabeth.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{

	char mib = 'a';
	int tat = 0;

	while (tat < 26)
	{
		putchar(mib);
		mib++;
		tat++;
	}
	putchar('\n');

	return (0);
}
