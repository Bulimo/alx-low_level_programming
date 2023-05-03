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
	void *address;
	void *arr_address[100];
	int no_loop = 1;

	while (head != NULL && no_loop)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		address = malloc(sizeof(head));
		if (address == NULL)
			exit(98);
		address = (void *)head;
		arr_address[count] = address;
		head = head->next;
		for (i = 0; i < count; i++)
		{
			if ((void *)head == arr_address[i])
			{
				no_loop = 0;
				break;
			}
		}
		count++;
	}
	if (head != NULL)
		printf(" ->[%p] %d\n", (void *)head, head->n);

	for (i = 0; i < count; i++)
		free(arr_address[i]);
	return (count);
}
