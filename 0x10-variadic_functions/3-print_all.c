#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - This is a function that prints anything.
* @format: List of types of arguments passed to the function
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int mib = 0;
	char *str;
	char current_formats;

	va_start(args, format);

	while (format && format[mib])
	{
		current_formats = format[mib];

		if (mib > 0)
			printf(", ");

		switch (current_formats)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}
		mib++;
	}
	printf("\n");
	va_end(args);
}

