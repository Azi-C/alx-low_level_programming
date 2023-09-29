#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reverse
 * @s: string to reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_put_rev_recursion(s+1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
