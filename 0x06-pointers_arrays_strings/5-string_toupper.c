#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 * @s: input string
 * Return: pointer to the resulting string
 */

char *string_toupper(char *)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
