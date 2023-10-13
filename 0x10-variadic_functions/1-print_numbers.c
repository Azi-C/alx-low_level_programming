#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int i;

	va_start(param, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(param, int));
		if (i < n && separator)
			printf("%s", separator);
	}
	va_end(param);

	printf("\n");
}
