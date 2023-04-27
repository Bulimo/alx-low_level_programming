#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all elements of list_t list
  * @h: pointer to the head of the list
  * Return: number of nodes printed
  */
size_t print_list(const list_t *h)
{
	/*list_t *current = h;*/
	int count = 0;
	int i = 0;

	if (h != NULL)
	{
		for (i = 0; h != NULL; h = h->next, i++)
		{
			if (h->str == NULL)
				printf("[%u] %s\n", 0, "(nil)");
			else
				printf("[%u] %s\n", h->len, h->str);
			count++;
		}
	}
	return (count);
}
