#include "main.h"
#include <string.h>

/**
* _strcat - function that prints two concatenated strings.
* @dest: The destination string.
* @src: The source string.
* Return: dest.
*/


char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}

