#include "main.h"

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: the main number
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (square_root(n, 0));
}


/**
 * square_root - function that finds the square root of n
 * @n: input number
 * @a: number to check
 * Return: the natural square root or -1 if not natural
 */

int square_root(int n, int a)
{
	if (a * a > n)
		return (-1);

	if (a * a == n)
		return (a);

	return (square_root(n, a + 1));
}
