#include "lists.h"

/**
 * insert_new - function that inserts node at given index
 * @tmp: pointer to the first node
 * @n: data
 * Return: the address of the inserted node
 */

dlistint_t *insert_new(dlistint_t *tmp, int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	new_node->next = tmp;
	new_node->prev = tmp->prev;
	tmp->prev->next = new_node;
	tmp->prev = new_node;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the pointer to the first node
 * @idx: the index xhere the node should be added
 * @n: the data
 * Return:  address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;

	if (!h)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));

	new = *h;
	while (idx && new->next)
	{
		idx--;
		new = new->next;
	}
	if (idx == 0)
	{
		return (insert_new(new, n));
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);

}
