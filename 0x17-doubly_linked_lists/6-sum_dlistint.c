#include "lists.h"

/**
 * sum_dlistint - returns sum of all data(n) of a dlistint_t list
 * @head: pointer to the first node of the list
 * Return: sum of data(n) or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *iter = NULL;
	int sum = 0;
	size_t forward = 1;

	if (head == NULL)
		return (0);
	if (head->next && head->prev)
	{
		iter = head->next;
		while (head)
		{
			sum += head->n;
			head = head->prev;
		}
		while (iter)
		{
			sum += iter->n;
			iter = iter->next;
		}
		return (sum);
	}
	iter = head;
	forward = iter->next ? 1 : 0;
	while (iter)
	{
		sum += iter->n;
		iter = forward ? iter->next : iter->prev;
	}
	return (sum);
}
