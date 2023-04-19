#include "function_pointers.h"

/**
  * int_index - searches for an integer in an array
  * @array: array to search in for an int
  * @size: size of an array
  * @cmp : function pointer that does the comprison
  * Return: the index of the int in array or 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
