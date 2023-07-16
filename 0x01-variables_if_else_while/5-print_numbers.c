#include <stdio.h>


/**
 * main - Entry point of the program,
 * initializes input count to print out
 * numbers from 1-9.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{

	int count = 0;

	while (count < 10)
	{
		printf("%d", count);
		count++;
	}

	printf("\n");

	return (0);
}
