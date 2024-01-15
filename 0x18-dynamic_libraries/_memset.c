#include "main.h"

/**
* _memset - fills a block of memory with a specific value.
* @s: starting address of memory to be filled.
* @b: the value of choice.
* @n: number of byte to be changed.
* Return: changed array with new value for n bytes which
* is a pointer to the memory area s.
*/


char *_memset(char *s, char b, unsigned int n)
{
    int i;

    for (i = 0; n > 0; i++)
    {
        s[i] = b;
        n--;
    }
    return (s);
}

