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
	long long d;
	float f;

	printf("Size of a char: %lu\n", sizeof(c));
	printf("Size of an int: %lu\n", sizeof(i));
	printf("Size of a long int: %lu\n", sizeof(r));
	printf("Size of a long long int: %lu\n", sizeof(d));
	printf("Size of a float: %lu\n", sizeof(f));

	return (0);
}
