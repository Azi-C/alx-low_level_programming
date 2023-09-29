#include "main.h"

/**
 * is_prime_number - verify if a n is a prime number
 * @n: the input number
 * Return: 1 if the n is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (division(n, 2));
}

/**
 * division - function that tests divisors
 * @n: input number
 * @d: divisor to check
 * Return: 1 if prime, 0 otherwise
 */

int division(int n, int d)
{
	if (d > n / 2)
		return (1);
	if (n % d == 0)
		return (0);
	return (division(n, d + 1));
}
