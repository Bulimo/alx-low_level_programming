#include "main.h"

/**
  * _realloc - reallocates memory block using malloc and free
  * @ptr: the pointer to memory to be reallocated
  * @old_size: old memory size
  * @new_size: new memory size
  * Return: pointer to new memory size, NULL otherwise
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr = NULL;			/* pointer to the new memory size */
	unsigned int i = 0;				/* loop counter */

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return ((void *)new_ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = *((char *)ptr + i);
		free(ptr);
		ptr = NULL;
		return ((void *)new_ptr);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = *((char *)ptr + i);
		free(ptr);
		ptr = NULL;
		return ((void *)new_ptr);
	}
	return (NULL);
}
