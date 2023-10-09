#include "main.h"

/**
 * array_range -  function that creates an array of integers
 * @min: the begening of the array
 * @max: max value and last of the array
 * Return: pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (min - max); i++)
		*(ptr + i) = min + i;

	return (ptr);
}
