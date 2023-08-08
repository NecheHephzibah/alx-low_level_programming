#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
* main - entry point of my function
* @argc: argument counter
* @argv: argument vector which is an array pointer
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int j;

			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
