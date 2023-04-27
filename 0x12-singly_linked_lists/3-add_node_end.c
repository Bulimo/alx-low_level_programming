#include "lists.h"
#include <string.h>

/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: address of the head of a list_t node
  * @str: string member of the new node
  * Return: pointer to the new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new = NULL;
	list_t *first = *head;				/* pointer to iterate through the list */

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	len = _strlen(str);
	new->len = len;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		first = new;
	}
	else
	{
		while (first->next != NULL)
			first = first->next;
		first->next = new;
	}

	return (new);
}

/**
  * _strlen - returns the length of the string passed
  * @s: the sting to find the length
  * Return: int length of string
  */
int _strlen(const char *s)
{
	int len = 0;			/* store string length */
	int i = 0;				/* loop counter */

	if (s != NULL)
	{

		while (*(s + i++))
			len++;
	}
	return (len);
}
