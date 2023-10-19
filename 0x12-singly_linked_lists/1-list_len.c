#include "lists.h"

/**
 * list_len - calculates  the number of elements in a linked list_t list
 * @h: the list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->next != NULL)
		{
			n++;
			h = h->next;
		}
	}

	return (n);
}
