#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 * Return: Pointer to the first node where value is located
 *         NULL if value is not present in the list or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump;
	size_t prev = 0, next = 0;
	listint_t *current = list, *iter = list;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);

	while (current && iter)
	{
		prev = next;
		next += jump;
		iter = current;
		while (iter->next && iter->index < next)
			iter = iter->next;

		printf("Value checked at index [%lu] = [%d]\n", iter->index, iter->n);
		if (iter->n < value && next < size)
		{
			current = iter;
			iter = iter->next;
		}
		else
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   current->index, iter->index);

	while (current && prev <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
