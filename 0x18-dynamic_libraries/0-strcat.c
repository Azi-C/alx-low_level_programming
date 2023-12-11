#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int lng = 0;
	int i = 0;

	while (dest[lng])
		lng++;

	while (src[i])
	{
		dest[lng + i] = src[i];
		i++;
	}
	dest[lng + i] = '\0';
	return (dest);
}
