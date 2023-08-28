#include "main.h"
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a number char
 * @word: string to be evaluated
 *
 * Return: 0 if all the string contains letters, 1 otherwise
 */
int is_digit(char *word)
{
	int i = 0;

	while (word[i])
	{
		if (word[i] < '0' || word[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - function that gets the length of a string
 * @word: string to evaluate
 *
 * Return: string length
 */
int _strlen(char *word)
{
	int mib = 0;

	while (word[mib] != '\0')
	{
		mib++;
	}
	return (mib);
}

/**
 * error - handles errors for main
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int lengthA, lengthB, length, numA, numB, i, take, *result, c = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		error();
	lengthA = _strlen(s1);
	lengthB = _strlen(s2);
	length = lengthA + lengthB + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= lengthA + lengthB; i++)
		result[i] = 0;
	for (lengthA = lengthA - 1; lengthA >= 0; lengthA--)
	{
		numA = s1[lengthA] - '0';
		take = 0;
		for (lengthB = _strlen(s2) - 1; lengthB >= 0; lengthB--)
		{
			numB = s2[lengthB] - '0';
			take += result[lengthA + lengthB + 1] + (numA * numB);
			result[lengthA + lengthB + 1] = take % 10;
			take /= 10;
		}
		if (take > 0)
			result[lengthA + lengthB + 1] += take;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			c = 1;
		if (c)
			_putchar(result[i] + '0');
	}
	if (!c)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

