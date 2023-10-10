#include "search_algos.h"

/**
 * binary_search - implements a binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lower = 0;
	size_t upper = size - 1;
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (lower <= upper)
	{
		print_array(array, lower, upper);
		i = (lower + upper) / 2;
		if (array[i] < value)
			lower = i + 1;
		else if (array[i] > value)
			upper = i - 1;
		else
			return (i);
	}
	return (-1);
}

/**
 * print_array - print an array
 * @array: pointer to first element of array to print
 * @start: start index
 * @end: last index to print
 */
void print_array(int *array, size_t start, size_t end)
{
	if (array == NULL)
		return;

	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		if (start == end)
			printf("%d", array[start]);
		else
			printf("%d, ", array[start]);
	}
	printf("%s", "\n");
}
