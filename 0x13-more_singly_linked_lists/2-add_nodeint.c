#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @h: the linked list
 * @n: the element to add
 * Return: address of the new element, or NULL if it failedi
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
