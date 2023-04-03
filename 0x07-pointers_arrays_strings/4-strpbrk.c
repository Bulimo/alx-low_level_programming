#include "main.h"

/**
  * _strpbrk - locates the 1st occurance in s of bytes in accept
  * @s: string to be scanned for accept characters
  * @accept: string containing characters to be matched
  * Return: a pointer to the byte in s or NULL if no such byte is found
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;				/* loop counter */
	unsigned int len = 0;			/* length of s */

	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		if (_strchr(accept, s[i]) != NULL)
			return (&s[i]);
	}
	return (NULL);
}

/**
  * _strchr - function that locates a character in a string
  * @s: pointer to string to search cahracter in
  * @c: character to search for
  * Return: pointer to the first occurance of c
  */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;					/* loop counter */
	unsigned int len;					/* length of the string */

	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		if (*(s + i) == c)
			return (&s[i]);
	}
	return (NULL);
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

