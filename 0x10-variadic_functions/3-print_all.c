#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - outputs values
 * @format: argument passed into when the function is called
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *spacer = "";

	va_list param;

	va_start(param, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", spacer, va_arg(param, int));
					break;
				case 'i':
					printf("%s%d", spacer, va_arg(param, int));
					break;
				case 'f':
					printf("%s%f", spacer, va_arg(param, double));
					break;
				case 's':
					str = va_arg(param, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", spacer, str);
					break;
				default:
					i++;
					continue;
			}
			spacer = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(param);
}

