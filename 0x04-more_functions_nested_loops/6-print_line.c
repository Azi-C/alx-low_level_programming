#include "main.h"

/**
 * print_line - draw a straight line using the character '_'
 * @n: the number of characters printed
 */

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
		_putchar('_');
	_putchar('\n');
}
