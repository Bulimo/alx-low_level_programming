#include "lists.h"

/**
 * free_dlistint - freed a doubly linked list
 * @head: pointer to the first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *iter = NULL;
	size_t forward = 0;

	if (head != NULL)
	{
		if (head->next && head->prev)
		{
			iter = head;
			while (head->prev && iter->next)
			{
				head = head->prev;
				iter = iter->next;
			}
			head = iter->next ? head : iter;
		}
		forward = head->next ? 1 : 0;
		while (head)
		{
			iter = head;
			head = forward ? head->next : head->prev;
			free(iter);
		}
	}
}

