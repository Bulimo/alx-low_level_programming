#include "lists.h"

/**
  * pop_listint - deletes head of listint_t list and returns the data of head
  * @head: address of the pointer to the first node
  * Return: data in the head
  */
int pop_listint(listint_t **head)
{
	listint_t *first = NULL;
	int n = 0;

	if (head == NULL)
		exit(1);
	if (*head != NULL)
	{
		first = *head;
		*head = (*head)->next;
		n = first->n;
		free(first);
		first = NULL;
	}
	return (n);
}
