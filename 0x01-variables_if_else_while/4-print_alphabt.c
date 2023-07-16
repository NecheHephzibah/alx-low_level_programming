#include <stdio.h>

/**
 * main - Entry point of the program,
 * initializes inputs mib to print out
 * the alphabet in lowercase without q and e.
 *
 * Return: Always 0 (Success).
 */


int main(void)
{

	int tat = 0;
	char mib = 'a';

	while (tat < 26)
	{
		if (mib != 'q' && mib != 'e')
		{
			putchar(mib);
		}
		mib++;
		tat++;
	}

	putchar('\n');

	return (0);
}
