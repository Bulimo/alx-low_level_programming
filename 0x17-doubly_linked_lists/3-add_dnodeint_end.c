#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end of doubly linked list
 * @head: pointer to pointer to the first node
 * @n: data of the new node
 * Return: pointer to new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *iter = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)		/* check for an empty list */
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	iter = *head;
	if (iter->next)
	{
		while (iter->next)
			iter = iter->next;
	}
	new->next = NULL;
	new->prev = iter;
	iter->next = new;
	return (new);
}
