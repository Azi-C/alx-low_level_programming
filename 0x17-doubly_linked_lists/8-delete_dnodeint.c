#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: the first pointer to the first node
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;

	if (!head || !*head)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	while (index && tmp->next)
	{
		index--;
		tmp = tmp->next;
	}
	if (index == 0)
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}
	return (-1);
}
