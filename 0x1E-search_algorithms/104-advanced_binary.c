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
	size_t mid = 0;

	if (array == NULL)
		return (-1);

	if (lower <= upper)
	{
		print_array(array, lower, upper);
		/* printf("lower = %lu, upper = %lu\n", lower, upper); */
		mid = lower + ((upper - lower) / 2);

		if (lower == upper && array[lower] != value)
			return (-1);

		if (array[mid] == value)
		{
			if (mid == lower || array[mid - 1] != value)
				return (mid);
			return (binarysearch(array, lower, mid, value));
		}

		if (array[mid] < value)
			return (binarysearch(array, mid + 1, upper, value));

		return (binarysearch(array, lower, mid - 1, value));
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
	if (array == NULL || size == 0)
		return (-1);

	return (binarysearch(array, 0, size - 1, value));
}
