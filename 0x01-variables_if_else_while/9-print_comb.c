#include <stdio.h>


/**
 * main - Entry point of the program.
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by commas and spaces.
 *
 * Return: Always 0 (Success).
 */


int main(void)
{
	int count = 0;

	while (count < 10)
	{
		putchar(count + '0');

		if (count < 9)
		{
			putchar(',');
			putchar(' ');
		}
		count++;
	}
	putchar('\n');

	return (0);
}
