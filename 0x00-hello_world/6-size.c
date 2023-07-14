#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;
	int i;
	long r;
	double d;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(r));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}