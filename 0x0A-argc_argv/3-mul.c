#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* main - entry point of my function
* @argc: argument counter
* @argv: argument vector which is an array pointer
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;
	int product;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			product = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
