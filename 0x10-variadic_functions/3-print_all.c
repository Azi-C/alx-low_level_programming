#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: the list of types of arguments passed to the function
 */

void	print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	char *s;
	va_list param;

	va_start(param, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(param, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(param, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(param, double));
				break;
			case 's':
				s = va_arg(param, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(param);
	printf("\n");
}
