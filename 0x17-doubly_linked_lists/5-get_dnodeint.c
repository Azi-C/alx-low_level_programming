#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: the first node
 * @index: the index of the node wanted
 * Return: the nth nod or NULL if not existed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (head->next && index)
	{
		head = head->next;
		index--;
	}

	if (index == 0)
		return (head);
	return (NULL);
}
