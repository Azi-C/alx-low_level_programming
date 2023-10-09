#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of s
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

/***
 * string_nconcat - function that concatenates two strings.
 * @s1: first input
 * @s2: second input
 * @n: n bytes of s2 used
 * Return: pointer to the conctaenation or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;
	int len2;
	int i;
	int j;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if ((int)n >= len2)
	{
		n = len2;
	}

	if ((int)n < 0)
	{
		return (NULL);
	}

	concat = malloc((len1 + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < (int)n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';
	return (concat);
}
