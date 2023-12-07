#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: the first element of a list
 * @n: the element in the node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tail;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	if(!(*head))
	{
		new->next = NULL;
		*head = new;
	}

	tail = *head;
	while (tail->next)
		tail = tail->next;

	new->next = NULL;
	new->prev = tail;
	tail->next = new;
	return (new);
}
