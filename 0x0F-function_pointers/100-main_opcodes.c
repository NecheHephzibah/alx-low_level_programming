#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is a function that prints its own opcodes
 * @argc: takes in total number of arguments
 * @argv: takes in array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int size_bytes, mib;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size_bytes = atoi(argv[1]);

	if (size_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (mib = 0; mib < size_bytes; mib++)
	{
		if (mib == size_bytes - 1)
		{
			printf("%02hhx\n", ar[mib]);
			break;
		}
		printf("%02hhx ", ar[mib]);
	}
	return (0);
}
