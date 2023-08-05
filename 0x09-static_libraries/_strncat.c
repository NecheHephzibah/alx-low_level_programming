#include "main.h"

/**
* _strncat - function that concatenates two strings.
* @dest: destination buffer, where the concatenated string will be
* stored..
* @src: the source string that will be appended to the dest buffer.
* @n: maximum number of characters to be copied from src
* to dest.
* Return: dest.
*/


char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
