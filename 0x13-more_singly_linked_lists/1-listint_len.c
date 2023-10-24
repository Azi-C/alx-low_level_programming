#include "lists.h"

/**
 * listint_len - calculates the number of elements in a linked list
 * @h: linked liste
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t s;

	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}
