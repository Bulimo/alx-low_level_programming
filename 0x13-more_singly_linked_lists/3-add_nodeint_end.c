#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: address of the pointer to the first node of the list
  * @n: data value for the new node
  * Return: address of new node, NULL otherwise
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *first = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	first = *head;
	while (first->next != NULL)
		first = first->next;
	first->next = new;

	return (new);
}

