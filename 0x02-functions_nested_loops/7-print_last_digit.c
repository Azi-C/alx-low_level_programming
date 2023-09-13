#include "main.h"

/**
 * print_last_digit- function that prints the last digit of a number
 *
 * @i: an integer as input
 *
 * Return:  value of the last digit
 */

int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
	{
		j *= -1;
	}
	_putchar(0 + 'j');
	return (j);
	_putchar('\n');
}
