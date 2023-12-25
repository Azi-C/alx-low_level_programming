#include "hash_tables.h"

/**
 * hash_table_create -  function that creates a hash table
 * @size: array's size
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int i = 0;

	if (size == NULL)
		return (NULL);

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (!h->array)
		return (NULL);
	while (i < size)
	{
		h->array[i] = NULL;
		i++;
	}
	h->size = size;
	return (h);
}
