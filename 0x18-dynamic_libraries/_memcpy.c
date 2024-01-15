#include "main.h"

/**
* _memcpy - a function that copies memory area.
* @dest: destination memory, where it is stored.
* @src: the source where the memory is copied from.
* @n: number of bytes.
* Return: Returns a pointer to dest.
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
    int mib = 0;
    int i = n;

    for ( ; mib < i; mib++)
    {
        dest[mib] = src[mib];
        n--;
    }
    return (dest);
}

