#include "main.h"

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: size od bytes to allocate
 * Return: pointer to the allocated memory, 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		return (98);
	}

	return (ptr);
}
