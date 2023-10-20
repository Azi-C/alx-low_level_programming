#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: the first node
 * @str: string to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	int l = 0;

	if (!temp)
		return (NULL);

	while (str[l])
		l++;

	temp->str = strdup(str);
	temp->len = l;
	temp->next = *head;

	*head = temp;
	return (*head);
}


