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
 * puts2 - prints every other character of a string
 * @str: input string to print
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
