#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to a pointer to first node
 * @index: index of the node to delete
 * Return: 1 if successful, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iter = NULL;
	unsigned int idx = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	iter = *head;
	if ((iter->next && iter->prev) || iter->prev)
	{
		while (iter->prev)
			iter = iter->prev;
	}
	while (iter)
	{
		if (index == idx)
		{
			if (iter->prev == NULL)
			{
				*head = iter->next;
				if (*head)
					(*head)->prev = NULL;
			} else if (iter->next == NULL)
				(iter->prev)->next = NULL;
			else
			{
				(iter->next)->prev = iter->prev;
				(iter->prev)->next = iter->next;
			}
			free(iter);
			return (1);
		}
		idx++;
		iter = iter->next;
	}
	return (-1);
}
