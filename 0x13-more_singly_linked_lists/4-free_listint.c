#include "lists.h"

/**
  * free_listint - frees a listint_t list
  * @head: pointer to the first element of list
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *node = NULL;

	if (head != NULL)
	{
		while (head != NULL)
		{
			node = head->next;
			free(head);
			head = node;
		}
		node = NULL;
	}
}
