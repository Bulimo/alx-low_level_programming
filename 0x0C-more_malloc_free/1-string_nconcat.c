#include "main.h"

/**
  * string_nconcat - a function that concatenates two strings
  * @s1: the first string
  * @s2: the second string
  * @n: number of bytes in s2 to copy
  * Return: pointer to concatenated string, NULL otherwise
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;						/* pointer to new concatenated string */
	int len1 = 0, len2 = 0;			/* length of s1 & s2 */
	int i = 0, j = 0;				/* loop counter */
	int size = n;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (size < 0)
		return (NULL);
	if (size >= len2)
		size = len2;
	if (!len1 && !len2)
		str = malloc(sizeof(char) * 1);
	else
		str = malloc(sizeof(char) * (len1 + size + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < size; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
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
