#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the first node of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *iter = NULL;
	size_t nodes = 0;

	if (h)
	{
		if (h->prev)
		{
			while (h->prev)
				h = h->prev;
		}
		iter = h;
		while (iter)
		{
			printf("%d\n", iter->n);
			nodes++;
			iter = iter->next;
		}
	}
	return (nodes);
}
