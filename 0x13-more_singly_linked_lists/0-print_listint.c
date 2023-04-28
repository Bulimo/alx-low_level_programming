#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list
  * @h: point: pointer to the first element of list
  * Return: the number of nodes printed
  */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; h = h->next, i++)
		printf("%d\n", h->n);

	return (i);
}
