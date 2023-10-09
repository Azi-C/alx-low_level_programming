#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: elements of an array
 * @size: number of bytes for each element
 * Return: pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *call;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	call = malloc(nmemb * size);

	if (call == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
	{
		*(call + i) = 0;
	}

	return (call);
}
