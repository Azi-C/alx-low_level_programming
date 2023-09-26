#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @: string input
 * @c: character searched
 * Return: pointer to the first occurrence of c, or NULL
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return (NULL);
}
