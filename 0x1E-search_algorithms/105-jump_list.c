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
	size_t jump, prev;
	listint_t *current;

	if (list == NULL)
		return (NULL);

	jump = sqrt(size);
	current = list;

	while (current && current->n < value)
	{
		prev = jump;
		while (current->next && current->index < prev)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, current->index);

	while (current && prev <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
