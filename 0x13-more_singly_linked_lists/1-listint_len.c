#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked listint_t list
  * @h: pointer to the first element of the list
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	for (; h != NULL; h = h->next, count++)
		;
	return (count);
}
