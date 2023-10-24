#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the first address of the first node
 * @index:  index of the node, starting at 0
 * Return:  the nth node, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (!temp)
		return (NULL);


	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (i == index)
		return (temp);

	return (NULL);
}
