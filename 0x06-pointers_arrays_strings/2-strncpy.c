#include "main.h"

/**
  * _strncpy - function to copy n bytes from a string to another
  * @dest: the string to be copied to
  * @src: the string to be copied
  * @n: number of characters to be copied
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;				/* index point */

	while (*(src + i) != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	/* fill remainder of n characters with null termination */
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
