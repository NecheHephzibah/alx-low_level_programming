#include "main.h"

/**
* is_palindrome - returns 1 if a string is palindrome
* and 0 if it is not.
* @s: a pointer to a char.
* Return: 1 if it, 0 if not.
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - returns the length of a string
* @s: string to calculate the length
* Return: length of string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
* check_pal - checks the characters recursively for palindrome
* @s: string to check
* @i: iterator
* @len: length of string
* Return: 1 if palindrome, 0 if not
*/

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
