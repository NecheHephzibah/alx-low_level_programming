#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - This function Prints strings, followed by a new line.
* @separator: This is the string to be printed between numbers.
* @n: while this is the number of integers passed to the function.
* Return: void
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int mib;
	char *str;

	va_start(args, n);

	for (mib = 0; mib < n; mib++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (mib < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
