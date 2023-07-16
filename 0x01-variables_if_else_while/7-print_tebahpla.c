#include <stdio.h>

/**
 * main - Entry point of the program,
 * prints characters from 'z' to 'a' in reverse order.
 *
 * Return: Always 0 (Success).
 */


int main(void)
{
	char mib = 'z';
	int tat = 26;

	while (tat > 0)
	{
		putchar(mib);
		mib--;
		tat--;
	}

	putchar('\n');

	return (0);

}

