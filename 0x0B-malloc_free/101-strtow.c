#include "main.h"

/**
  * strtow - splits a string into words
  * @str: string to sort into words
  * Return: pointer to array of strings, NULL otherwise
  */
char **strtow(char *str)
{
	int num_words = 0;
	char **s;					/* pointer to arbitrar number of words */
	int i = 0, j = 0;			/* loop counters */
	int start = 0, end = 0;				/* start and end index of a word */

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (i == 0 || str[i + 1] == ' '))
			num_words++;
	if (!num_words)
		return (NULL);
	s = malloc(sizeof(char *) * num_words);
	if (s == NULL)
		return (NULL);
	start = first_not_of(str, ' ', 0);			/* find first index of first word */
	while (str[start] != '\0')
	{
		end = first_of(str, ' ', start);	/* find last index */
		if (str[end] == '\0')
			end = _strlen(str);
		s[j] = malloc(sizeof(char) * (end - start + 1));
		if (s[j] == NULL)
		{
			for (i = 0; i < j; i++)
				free(s[i]);
			free(s);
			return (NULL);
		}
		s[j] = _strncpy(s[j], &str[start], end - start);
		s[j][end - start] = '\0';
		j++;
		start = first_not_of(str, ' ', end);
	}
	s[j] = NULL;
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

	if (s != NULL)
	{

		while (*(s + i++))
			len++;
	}
	return (len);
}

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

/**
  * first_not_of - finds first character not matching passed character
  * @s: string to search character
  * @c: character to search
  * @index: point to start searching from
  * Return: the index
  */
int first_not_of(char *s, char c, int index)
{
	while (s[index] != '\0')
	{
		if (s[index] != c)
			break;
		++index;
	}
	return (index);
}

/**
  * first_of - finds first character matching passed character
  * @s: string to search character
  * @c: character to search
  * @index: point to start searching from
  * Return: the index
  */
int first_of(char *s, char c, int index)
{
	while (s[index] != '\0')
	{
		if (s[index] == c)
			break;
		++index;
	}
	return (index);
}
