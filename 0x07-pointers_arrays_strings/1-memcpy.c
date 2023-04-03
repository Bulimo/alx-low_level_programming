#include "main.h"

/**
  * _memcpy - function to copy a memory area
  * @dest: destination where to copy memory
  * @src: source of the memory to copy
  * @n: size of the memory to copy
  * Return: the pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(dest + i) = src[i];
	return (dest);
}
