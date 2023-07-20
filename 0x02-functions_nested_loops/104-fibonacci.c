#include <stdio.h>

/**
* main - prints the sum of all the multiples of 3
* or 5 below 1024 (excluded).
* Return: Always 0 (Success).
*/

int main(void)
{
	int hub = 0;
	unsigned long int jub = 0, kub = 1, next = 0;

	while (hub < 98)
	{
		next = jub + kub;
		jub = kub;
		kub = next;
		printf("%lu", next);

		if (hub < 97)
		{
			printf(", ");
		}
		hub++;
	}
	putchar('\n');

	return (0);
}
