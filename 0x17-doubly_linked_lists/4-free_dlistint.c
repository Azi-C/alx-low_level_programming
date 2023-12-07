#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the first node in the list
 */

void free_dlistint(dlistint_t *head)
{
	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
