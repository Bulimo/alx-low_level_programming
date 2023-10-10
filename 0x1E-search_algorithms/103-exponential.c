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

/**
 * exponential_search - implements exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t step = 1;
	size_t prev = 0;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]", array[0]);
		return (0);
	}

	for (; step < size && array[step] <= value; step *= 2)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
	}

	if (step >= size)
		step = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	return (binarysearch(array, prev, step, value));
}
