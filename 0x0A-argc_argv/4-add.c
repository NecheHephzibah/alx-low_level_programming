#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - entry point of my function
* @argc: Argument Counter
* @argv: Argument Vector which is an array pointer to a string
* Return: 0
*/

int main(int argc, char *argv[])
{
	int mib, summation;

	if (argc > 1)
	{
		for (mib = 1; mib < argc; mib++)
		{
			int jib;

			for (jib= 0; argv[mib][jib] != '\0'; jib++)
			{
				if (!isdigit(argv[mib][jib]))
				{
					printf("Error\n");
					return (1);
				}
			}
			summation += atoi(argv[mib]);
		}
		printf("%d\n", summation);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
