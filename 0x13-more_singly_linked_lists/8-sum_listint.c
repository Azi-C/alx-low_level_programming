#include "lists.h"

/**
 * sum_listint -  sum of all the data (n) of a listint_t linked list
 * @head: the first adress in the linked list
 * Return: the sum of n, 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *temp = head;

	while (temp)
	{
		s += temp->n;
		temp = temp->next;
	}

	return (s);
}
