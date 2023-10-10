#include "search_algos.h"
#include <math.h>

/**
 * min - find minimum of 2 numbers
 * @a: the first number
 * @b: the second number
 * Return: smaller of the two
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
 * jump_search - implements the jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while ((index < size) && (array[index] < value))
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		prev = index;
		index += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, index);

	for (; prev <= index && prev < size; prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
