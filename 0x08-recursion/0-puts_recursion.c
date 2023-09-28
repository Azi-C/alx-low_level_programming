#include "main.h"

/**
 * puts_recursion -  prints a string, followed by a new line.
 *
 * @s: the string to print
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
