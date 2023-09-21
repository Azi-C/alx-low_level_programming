#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 *
 * @s1: first string to compare
 * @s2; second string to compare
 *
 * Result: 0 if s1=s2, >0 if s1>s2, <0 if s1<s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
