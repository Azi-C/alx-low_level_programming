#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the first element of a linked list
 * Return: head node’s data (n), 0 if list empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;

	free(temp);
	return (data);
}
