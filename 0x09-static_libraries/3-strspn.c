#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: initial segment
 * @accept: bytes to match
 * Return: gets the length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int n = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == *(accept + i))
			{
				n++;
				break;
			}
		}
		if (*s != *(accept + i))
			break;
		s++;
	}
	return (n);
}
