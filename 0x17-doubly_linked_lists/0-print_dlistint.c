#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: doubly linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t nb = 0;

	tmp = h;
	while (tmp)
	{
		nb++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (nb);
}
