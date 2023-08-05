#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
* main - entry point of my function
* @argc: argument counter
* @argv: argument vector which is an array pointer
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
