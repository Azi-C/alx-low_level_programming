#include "main.h"

/**
 * print_diagonal - draw a diagonal line using the character '\'
 * @n: the number of characters printed
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
