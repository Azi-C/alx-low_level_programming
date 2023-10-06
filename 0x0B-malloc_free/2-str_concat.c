#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first input string
 * @s2: second input string
 * Result: pointer to the concatenation of the strings
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to a string (s1 and s2), NULL if it fails
 */

char	*str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len1;
	int len2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat[j + i] = s2[j];

	concat[j + i] = '\0';
	return (concat);
}
