#include "lists.h"
#include <stdio.h>

/**
  * print_listint_safe - can print a listint_t list with a loop
  * @head: pointer to the starting point of the list
  * Return: Number of nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, i = 0;
	const listint_t *arr_address[500] = {NULL};
	int no_loop = 1;

	while (head != NULL && no_loop)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		arr_address[count] = head;
		head = head->next;
		for (i = 0; i < count; i++)
		{
			if (head == arr_address[i])
			{
				no_loop = 0;
				break;
			}
		}
		count++;
		if (count >= 500)
			exit(98);
	}
	if (head != NULL)
		printf(" ->[%p] %d\n", (void *)head, head->n);

	return (count);
}
