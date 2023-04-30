#include "lists.h"

/**
  * delete_nodeint_at_index - deletes a node at a given index
  * @head: address of the pointer to the first element of the list
  * @index: index of the element todelete in the list from 0
  * Return: 1 if SUCCESS, -1 otherwise
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete_node = NULL;
	listint_t *prev_node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		delete_node = *head;
		*head = (*head)->next;
	}
	else
	{
		prev_node = get_nodeint_at_index(*head, index - 1);
		if (prev_node == NULL || prev_node->next == NULL)
			return (-1);
		delete_node = prev_node->next;
		prev_node->next = delete_node->next;
	}
	delete_node->next = NULL;
	free(delete_node);
	delete_node = NULL;
	return (1);
}

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
