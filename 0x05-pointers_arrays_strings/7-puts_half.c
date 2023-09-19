#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of the string s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts_half -  prints half of a string
 *
 * @str: input string
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	if (len % 2 != 0)
		i = (len + 1) / 2;
	else
		i = len / 2;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
