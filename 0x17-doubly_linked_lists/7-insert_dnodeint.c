#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at an index given
 * @h: pointer to a pointer to the first node
 * @idx: index in the list where to add new node
 * @n: data of the new node
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *iter = NULL;
	unsigned int index = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	iter = *h;
	if ((iter->next && iter->prev) || iter->prev)
	{
		while (iter->prev)
			iter = iter->prev;
	}
	while (iter)
	{
		if (index == idx)
		{
			new->prev = iter->prev;
			(iter->prev)->next = new;
			new->next = iter;
			iter->prev = new;
			return (new);
		}
		index++;
		iter = iter->next;
	}
	if (index == idx)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
