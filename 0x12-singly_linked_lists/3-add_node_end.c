#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: the string to add
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	list_t *p = *head;
	int i = 0;

	tail = malloc(sizeof(list_t));

	if (!tail)
		return (NULL);

	while (str[i])
		i++;

	tail->str = strdup(str);
	tail->len = i;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}

	while (p->next != NULL)
		p = p->next;

	p->next = tail;

	return (tail);
}
