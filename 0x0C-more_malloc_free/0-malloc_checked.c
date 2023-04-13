#include "main.h"

/**
  * malloc_checked - function that allocates memory using malloc
  * @b: memory size to be allocated
  * Return: pointer to allocated memory, 98 otherwise
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;				/* pointer to the allocated memory */

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
