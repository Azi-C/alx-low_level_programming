#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: number who's searching its factorial
 * Return: -1 if n < 0, or factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}
