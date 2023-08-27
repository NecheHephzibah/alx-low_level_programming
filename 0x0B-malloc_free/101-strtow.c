#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int word_iterate(char *s)
{
	int status = 0;
	int xs;
	int era = 0;

	for (xs = 0; s[xs] != '\0'; xs++)
	{
		if (s[xs] == ' ')
			status = 0;
		else if (status == 0)
		{
			status = 1;
			era++;
		}
	}

	return (era);
}
/**
 * **strtow - function that splits a string into words
 * @str: string to be splitted
 * Return: pointer
 */
char **strtow(char *str)
{
	char **maze, *now;
	int era, kiwi = 0, ep_len = 0, okwu, xs = 0, begin, fin;

	while (*(str + ep_len))
		ep_len++;
	okwu = word_iterate(str);
	if (okwu == 0)
		return (NULL);

	maze = (char **) malloc(sizeof(char *) * (okwu + 1));
	if (maze == NULL)
		return (NULL);

	for (era = 0; era <= ep_len; era++)
	{
		if (str[era] == ' ' || str[era] == '\0')
		{
			if (xs)
			{
				fin = era;
				now = (char *) malloc(sizeof(char) * (xs + 1));
				if (now == NULL)
					return (NULL);
				while (begin < fin)
					*now++ = str[begin++];
				*now = '\0';
				maze[kiwi] = now - xs;
				kiwi++;
				xs = 0;
			}
		}
		else if (xs++ == 0)
			begin = era;
	}

	maze[kiwi] = NULL;

	return (maze);
}

