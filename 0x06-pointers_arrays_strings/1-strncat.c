#include "main.h"

/**
  * _strncat - function to concatenate two strings
  * @dest: the concatenated string
  * @src: the source string
  * @n: number of bytes to copy fron src
  * Return: pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0;			/* hold string length for dest */
	int count2 = 0;			/* hold string length for src */

	count1 = _strlen(dest);

	while ((*(src + count2) != '\0') && (count2 < n))
	{
		dest[count1] = src[count2];
		++count1;
		++count2;
	}
	dest[count1] = '\0';

	return (dest);
}

/**
  * _strlen - returns the length of the string passed
  * @s: the sting to find the length
  * Return: int length of string
  */
int _strlen(char *s)
{
	int len = 0;			/* store string length */
	int i = 0;				/* loop counter */

	while (*(s + i++))
		len++;
	return (len);
}

