#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of doubly linked list
 * @head: pointer to the first node
 * @index: index of the node to return
 * Return: pointer to the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *iter = NULL;
	unsigned int nodes = 0;

	if (head)
	{
		iter = head;
		if ((iter->next && iter->prev) || iter->prev)
		{
			while (iter->prev)
				iter = iter->prev;
		}
		while (iter)
		{
			if (nodes == index)
				return (iter);
			nodes++;
			iter = iter->next;
		}
	}
	return (NULL);
}
