#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a node at a given position
  * @head: address of the pointer to the first node of list
  * @idx: index position to add node
  * @n: data value of the new node
  * Return: the new node or NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *index_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	index_node = get_nodeint_at_index(*head, idx - 1);
	if (index_node == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = index_node->next;
	index_node->next = new;

	return (new);
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
