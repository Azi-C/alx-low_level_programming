#include "main.h"

/**
 * cap_string - capitalizes words of a string
 * @s: string to modify
 * Return: the resulting string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && (i == 0 || s[i - 1] == ' ' ||
		s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == ',' ||
		s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' ||
		s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' ||
		s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'))
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
