#include "function_pointers.h"

/**
  * array_iterator - function that calls a function that operates on an array
  * @array: an array of elements to operate on
  * @size: size of the array
  * @action: function that operates on array elements
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
