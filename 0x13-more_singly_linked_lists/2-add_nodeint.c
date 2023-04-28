#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a linked_t list
  * @head: address of the pointer to the first element
  * @n: value of n member of the node
  * Return: address of new element, NULL otherwise
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
