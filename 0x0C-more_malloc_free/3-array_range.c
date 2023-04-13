#include "main.h"

/**
  * array_range - allocates an array of integers
  * @min: the minimum value of array
  * @max: maximum value of array
  * Return: pointer to array, NULL otherwise
  */
int *array_range(int min, int max)
{
	int i = 0;				/* loop counter */
	int *arr = NULL;		/* pointer to array */

	if (min > max)
		return (NULL);
	arr = malloc((1 + (max - min)) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}
