#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string input
 * Return: pointer to the duplicated string, NULL otherwise
 */

char *_strdup(char *str)
{
	int i = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++;
	copy = malloc((i + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (*(str + i))
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
