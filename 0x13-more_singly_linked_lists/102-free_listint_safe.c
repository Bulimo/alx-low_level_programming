#include "lists.h"
#include <stdio.h>

/**
  * free_listint_safe - function that frees a listint_t list
  * @h: address of the pointer to the first node of the list
  * Return: returns the size of the list freed
  */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0, i = 0;
	listint_t *next = NULL;
	listint_t *nodes[1024] = {NULL};
	int no_loop = 1;

	if (h != NULL)
	{
		while (*h != NULL && no_loop)
		{
			nodes[count] = *h;
			next = (*h)->next;
			free(*h);
			(*h) = NULL;
			(*h) = next;
			count++;
			for (i = 0; i < count; i++)
			{
				if (*h == nodes[i])
				{
					no_loop = 0;
					break;
				}
			}
			if (count >= 1024)
				return (0);
		}
		*h = NULL;
		next = NULL;
	}
	h = NULL;
	return (count);
}
