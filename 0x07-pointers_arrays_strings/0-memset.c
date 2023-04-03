#include "main.h"

/**
  * _memset - function that fills memory with a constant byte
  * @s: pointer to the memory to be filled
  * @b: constant char to fill in the memory
  * @n: size of the memory to fill
  * Return: pointer to s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;				/* loop counter */

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

