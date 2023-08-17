#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this function Returns the sum of all its parameters.
 * @n: This is the number of arguments passed to the function.
 * Return: The sum of all the argument provided
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int addition = 0;
	unsigned int d;

	va_start(args, n);

	for (d = 0; d < n; d++)
	{
		addition += va_arg(args, int);
	}

	va_end(args);

	return (addition);
}
