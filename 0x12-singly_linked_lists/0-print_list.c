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
		for ( i = 0; h != NULL; h = h->next, i++)
		{
			printf("[%d] ", i);
			if (h->str == NULL)
				printf("%s\n", "(nil)");
			else
				printf("%s\n", h->str);
			count++;
		}
	}
	return (count);
}
