#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int i;
	char *s;

	va_start(param, n);
	for (i = 1; i <= n; i++)
	{
		s = va_arg(param, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i < n && separator)
			printf("%s", separator);
	}
	va_end(param);

	printf("\n");
}
