#include <stdio.h>


/**
 * main - Entry point of the program.
 *
 * Description: Prints all possible combinations of three-digit numbers
 * separated by commas and spaces.
 *
 * Return: Always 0 (Success).
 */


int main(void)
{
	int digit1 = 0, digit2 = 1, digit3 = 2;

	while (digit1 <= 7)
	{
		while (digit2 <= 8)
		{
			while (digit3 <= 9)
			{
				if (digit1 < digit2 && digit2 < digit3)
				{
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(digit3 + '0');

					if (digit1 != 7 || digit2 != 8 || digit3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				digit3++;
			}
			digit2++;
			digit3 = digit2 + 1;
		}
		digit1++;
		digit2 = digit1 + 1;
		digit3 = digit2 + 1;

	}
	putchar('\n');

	return (0);
}
