#include "main.h"

/**
 * leet - function that encodes a string in 1337
 * @s: string to encode
 * Return: pointer to the resulting string
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;

	char	a[] = "aAeEoOtTlL";
	char	b[] = "4433007711";

	while (s[i])
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == a[j])
				s[i] = b[j];
			j++;
		}
		i++;
	}
	return (s);
}
