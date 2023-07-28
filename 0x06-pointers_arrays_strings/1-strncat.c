#include "main.h"
#include <string.h>

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
	int dest_length = strlen(dest);
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[dest_length + count] = src[count];
		dest[dest_length] = '\0'; 
	}
	return (dest);
}
