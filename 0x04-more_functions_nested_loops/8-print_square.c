#include "main.h"

/**
 * print_square - function that prints a square
 *
 * @size: size of the square
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = size; i > 0; i--)
	{
		for (j = size; j > 0; j--)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	_putchar('\n');
}
