#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of listint_t list
  * @head: pointer to the first node of the list
  * @index: index of the node to be returned
  * Return: nth index node, NULL otherwise
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
