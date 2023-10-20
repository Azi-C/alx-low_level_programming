#include "lists.h"

/**
 * print_list - returns the number of elements in a linked list_t list
 * @h: the list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{

		n++;
		h = h->next;
	}

	return (n);
}
