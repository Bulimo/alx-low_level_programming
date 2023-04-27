#include "lists.h"
#include <string.h>

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: address of the pointer to the head of the list
  * @str: string member of the list_t struct
  * Return: address of the new element or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	len = _strlen(str);
	new->len = len;
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (*head);
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

