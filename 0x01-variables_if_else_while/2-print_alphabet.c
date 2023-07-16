#include <stdio.h>

/**
 * main - Entry point of the program,
initializes input n to generate a random number.
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
