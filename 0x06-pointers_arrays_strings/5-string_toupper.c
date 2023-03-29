#include "main.h"

/**
  * string_toupper - changes all lowercase letters to uppercase
  * @s: string to change case
  * Return: string with case changed to uppercase
  */
char *string_toupper(char *s)
{
	int i = 0;				/* loop counter */
	int len = 0;			/* string length */

	len = _strlen(s);

	while (*(s + i) && i < len)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] -= ('a' - 'A');
		++i;
	}
	return (s);
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

