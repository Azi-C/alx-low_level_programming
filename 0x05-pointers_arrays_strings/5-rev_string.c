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
 * rev_string - reverses a string
 * @s: input string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char a;

	while (i < j)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
		i++,
		j--;
	}
}
