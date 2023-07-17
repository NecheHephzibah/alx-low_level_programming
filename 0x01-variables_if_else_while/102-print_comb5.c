#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * separated by commas and spaces.
 *
 * Return: Always 0 (Success).
 */


int main(void)
{
	int digit1 = 0, digit2 = 1;

	while (digit1 <= 99)
	{
		while (digit2 <= 99)
		{
			if (digit1 != 0 || digit2 != 1)
			{
				putchar(',');
				putchar(' ');
			}

			putchar(digit1 / 10 + '0');
			putchar(digit1 % 10 + '0');
			putchar(' ');
			putchar(digit2 / 10 + '0');
			putchar(digit2 % 10 + '0');

			digit2++;

		}
		digit1++;
		digit2 = digit1 + 1;
	}
	putchar('\n');

	return (0);

}
