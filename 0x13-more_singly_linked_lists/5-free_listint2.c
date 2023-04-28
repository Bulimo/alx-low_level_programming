#include "lists.h"
/**
  * free_listint2 - frees the listint_t list
  * @head:  address to the pointer of the node of the list
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *node = NULL;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			node = (*head)->next;
			free(*head);
			*head = node;
		}
		*head = NULL;
		node = NULL;
	}
	head = NULL;
}

