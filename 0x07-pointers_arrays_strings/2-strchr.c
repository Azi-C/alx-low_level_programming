#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @: string input
 * @c: character searched
 * Return: pointer to the first occurrence of c, or NULL
 */

char *_strchr(char *s, char c)
{
	int i=0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (i);
		}

		i++;
	}

	return (NULL);
}
