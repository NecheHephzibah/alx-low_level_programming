#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - this function prints numbers followed by a new line
* @separator: this is the string to be printed between numbers
* @n: Thia is the number of integers passed to the function
* Return: void
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int mib;
	int number;

	va_start(args, n);

	for (mib = 0; mib < n; mib++)
	{
		number = va_arg(args, int);
		printf("%d", number);

		if (separator != NULL && mib < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
