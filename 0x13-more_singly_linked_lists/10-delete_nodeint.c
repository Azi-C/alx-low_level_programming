#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: the first address of the first node
 * @index:  index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int i = 0;
	listint_t *temp2;

	if (!temp)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (i < index - 1 && temp)
	{
		temp = temp->next;
		i++;
	}

	if (i = index - 1)
	{
		temp2 = temp->next;
		temp->next = temp2->next;
		free(temp2);
		return (1);
	}

	return (-1);
}
