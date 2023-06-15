#include "lists.h"

/**
 * dlistint_len - returns number of elements in doubly linked list
 * @h: pointer to the first node of the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *iter = NULL;
	size_t nodes = 0;
	size_t forward = 1;

	if (h == NULL)
		return (0);
	if (h->next && h->prev)
	{
		iter = h;
		while (h->prev && iter->next)
		{
			h = h->prev;
			iter = iter->next;
		}
		h = iter->next ? h : iter;
	}
	iter = h;
	forward = iter->next ? 1 : 0;
	while (iter)
	{
		nodes++;
		iter = forward ? iter->next : iter->prev;
	}
	return (nodes);
}

