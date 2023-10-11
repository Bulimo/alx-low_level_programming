#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return: return a pointer on the first node where value is located
 *         or NULL
 *
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
		return (NULL);

	current = list;
	express = list->express;

	while (express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			   express->index, express->n);
		if (express->n >= value)
			break;
		current = express;
		if (express->express)
			express = express->express;
		else
		{
			while (express->next)
				express = express->next;
			break;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   current->index, express->index);

	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			   current->index, current->n);
		if (current->n == value)
			return (current);
		if (current->n > value)
			break;
		current = current->next;
	}
	return (NULL);
}
