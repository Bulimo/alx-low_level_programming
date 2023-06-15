#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of doubly linked list
 * @head: pointer to a pointer to the first node
 * @n: data of the new node
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));	/* create a node */
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)	/* check for an empty list */
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	if ((*head)->prev)
	{
		while ((*head)->prev)
			*head = (*head)->prev;
	}
	new->next = *head;
	new->prev = (*head)->prev;
	(*head)->prev = new;
	*head = new;
	return (new);
}
