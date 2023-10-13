#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: the sum of parameters, 0 if no argument
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	unsigned int i;
	int sum = 0;

	va_start(param, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(param, int);
	va_end(param);

	return (sum);
}
