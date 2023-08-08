#include <stdio.h>
#include <stdlib.h>
#include <limits.h> /* for INT_MAX */

/**
* main - Function thats the entry point of this programme
* @argc: argument count passed into main function
* @argv: argument vector which is an array of strings and can
* also be converted to an interger using atoi function
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int cents;
	int denomination[] = {25, 10, 5, 2, 1};
	int numberCoins = sizeof(denomination) / sizeof(denomination[0]);
	int minimumCoins = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		minimumCoins = 0;
		printf("%d\n", minimumCoins);
		return (0);
	}

	for (i = 0; i < numberCoins; i++)
	{
		while (cents >= denomination[i])
		{
			cents = cents - denomination[i];
			minimumCoins++;
		}
	}
	printf("%d\n", minimumCoins);

	return (0);
}

