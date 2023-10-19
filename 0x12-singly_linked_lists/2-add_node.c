#include "lists.h"

/**
 * _strlen - calculates the length of a string
 * @s: the string
 * Return the lenght of s
 */

int _strlen( const char *s)
{
	if (s)
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: the first node
 * @str: string to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	int len = _strlen(str);

	if(!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;

	*head = temp;
	return (*head);
}

	
