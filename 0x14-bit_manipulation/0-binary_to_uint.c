
#include "main.h"

/**
 * binary_to_uint - converts binary in string format to unsigned integers.
 * @b: the user input which is in binary format goes here.
 * Return: result, the converted binary, now an integer.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int length;
	int i;

	if (!b)
		return (0);

	for (length = 0; b[length] != '\0'; length++)
		;

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] == '1')
		{
			result += base;
		}

		base = base * 2;
	}

	return (result);
}
