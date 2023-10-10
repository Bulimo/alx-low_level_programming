#include "search_algos.h"

/**
 * binarysearch - implements a binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @lower: lower index of binary search
 * @upper: upper index of binary search
 * @value: the value to search for
 * Return: the index where value is located or -1
 */
int binarysearch(int *array, size_t lower, size_t upper, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	if (lower <= upper)
	{
		print_array(array, lower, upper);
		i = lower + ((upper - lower) / 2);
		if (array[i] < value)
			return (binarysearch(array, i + 1, upper, value));
		if (array[i] > value)
			return (binarysearch(array, lower, i - 1, value));
		if (array[i] == value)
		{
			if (array[i - 1] == value)
				return (binarysearch(array, lower, i, value));
			else
				return (i);
		}
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

/**
 * advanced_binary - implements binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binarysearch(array, 0, size - 1, value));
}
