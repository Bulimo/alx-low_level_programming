#include "search_algos.h"

/**
 * interpolation_search - implements interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = 0;
	size_t low = 0;
	size_t pos = 0;

	if (array == NULL)
		return (-1);

	high = size - 1;

	while (low <= high)
	{
		pos = (low + (((double)(high - low) / (array[high] - array[low])) *
					  (value - array[low])));
		if (pos < size)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				high = pos - 1;
			else if (array[pos] > value)
				low = pos + 1;
			else
				return (pos);
		}
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
	}
	return (-1);
}
