#include "main.h"

/**
 * _strcat- function that concatenates two strings.
 *
 * @dest: first string
 * @src: string added
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int l = 0;
	int i = 0;

	while (dest[l])
		l++;

	while (src[i])
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}
