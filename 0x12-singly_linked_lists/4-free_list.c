#include "lists.h"

/**
  * free_list - function that frees a list_t list
  * @head: pointer to the head of list_t list
  * Return: nothing
  */
void free_list(list_t *head)
{
	list_t *current = head;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		current = head->next;
		if (head->str != NULL)
			free(head->str);
		head->str = NULL;
		free(head);
		head = current;
	}
	head = NULL;
	current = NULL;
}
