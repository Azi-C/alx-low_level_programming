#include "main.h"

/**
 * _strncat -  function that concatenates two strings.
 *
 * @dest: first string
 * @src: string added at the end
 * @n: nomber of bytes
 *
 * Return;  pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i = 0;

	while (dest[l])
		l++;

	while (i < n && src[i])
	{
		dest[l + i] = src[i];
		i++;
	}

	dest[l + i] = '\0';

	return (dest);
}
