#include "main.h"

/**
  * _calloc - assign memory and initialize to 0
  * @nmemb: the number of elements in an array
  * @size: size of each element
  * Return: pointer to allocated memory, NULL otherwise
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;					/* allocated memory pointer */
	unsigned int i = 0;

	if (!(nmemb > 0) || !(size > 0))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = '\0';
	return ((void *)ptr);
}
