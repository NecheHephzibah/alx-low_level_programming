#include "main.h"

/**
* _strncpy - function that concatenates two strings.
* @dest: destination buffer, where the copied string will be
* stored..
* @src: the source string that will be appended to the dest buffer.
* @n: maximum number of characters to be copied from src
* to dest.
* Return: dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

