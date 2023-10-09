#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size of the allocated memory
 * @new_size: new size of the allocated memory
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL || new_size > old_size)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		return (p);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < new_size && i < old_size; i++)
		*(p + i) = *((char *)ptr + i);

	free(ptr);
	return (p);
}
