#include "main.h"

/**
  * create_array - creates an array of char and initializes it
  * @size: size of the array
  * @c: character to initialize array with
  * Return: pointer to the array, otherwise NULL
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;	/* loop counter */
	char *s;			/* a new array string */

	if (size <= 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (; i < size; i++)
		s[i] = c;
	/* s[i] = '\0'; */
	return (s);
}
