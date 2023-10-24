#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: the first address in the linked list
 * @idx:  index of the list where the new node should be added
 * @n: element of the node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (i < idx && temp)
	{
		temp = temp->next;
		i++;
	}

	if (i == idx)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}

	return (NULL);
}
