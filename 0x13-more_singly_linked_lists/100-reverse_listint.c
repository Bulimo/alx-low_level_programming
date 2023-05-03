#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list
  * @head: address of the pointer to the first element
  * Return: pointer to the 1st node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while ((*head) != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = (*head);
		(*head) = next_node;
	}
	(*head) = prev_node;

	return (*head);
}
