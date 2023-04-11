#include "main.h"

/**
  * _strdup - copies a string given as a parameter
  * @str: string to be copied
  * Return: pointer to the duplicated string, NULL otherwise
  */
char *_strdup(char *str)
{
	int i = 0;				/* loop counter */
	int len = 0;			/* length of string */
	char *s = NULL;			/* duplicate string */

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
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
