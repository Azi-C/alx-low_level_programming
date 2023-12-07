#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: the first node in the list
 * Return: the sum of all the data, 0 otherwise
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;

	return(sum);
}
