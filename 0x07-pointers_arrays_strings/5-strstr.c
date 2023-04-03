#include "main.h"

/**
  * char *_strstr -  function that finds 1st instance of a substring
  * @haystack: string to be searched in
  * @needle: string to search in haystack
  * Return: the pointer to beginning of instance or NULL
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;					/* haystack loop counter */
	int j = 0;					/* needle loop counter */
	int len1 = 0;				/* haystack length */
	int len2 = 0;				/* needle llength */
	int k = 0;					/* count from start of instance */

	len1 = _strlen(haystack);
	len2 = _strlen(needle);
	for (i = 0; i < len1; i++)
	{
		if (haystack[i] == needle[j])
		{
			k = i;
			for (j = 0; j < len2; j++, k++)
			{
				if (needle[j] != haystack[k])
				{
					break;
				}
			}
			if (j == len2 && i < len1)
				return (&haystack[k - j]);
		}
		j = 0;
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
