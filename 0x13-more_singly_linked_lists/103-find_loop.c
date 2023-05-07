#include "lists.h"

/**
  * find_listint_loop - finds the loop in a linked list
  * @head: pointer to the firat node of the list
  * Return: address of node loop starts, NULL otherwise
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast_ptr = NULL;
	listint_t *slow_ptr = NULL;

	if (head == NULL)
		return (NULL);
	fast_ptr = head;
	slow_ptr = head;
	while (fast_ptr != NULL && slow_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (fast_ptr == slow_ptr)
		{
			fast_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				fast_ptr = fast_ptr->next;
				slow_ptr = slow_ptr->next;
			}
			return (fast_ptr);
		}
	}
	return (NULL);
}
