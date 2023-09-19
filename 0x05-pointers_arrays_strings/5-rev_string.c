#include "main.h"

/**
 * rev_string -  function that reverses a string.
 *
 * @s: pointer to characters
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
