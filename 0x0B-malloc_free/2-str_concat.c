#include "main.h"

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to concatenated string, NULL otherwise
  */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;			/* length f s1 */
	int len2 = 0;			/* length of s2 */
	int i = 0;				/* s1 loop counter */
	int j = 0;				/* s2 loop coounter */
	char *str = NULL;		/* concatenated string */

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	if ((len1 + len2) > 0)
	{
		for (i = 0; i < len1; i++)
			str[i] = s1[i];
		for (j = 0; j < len2; j++, i++)
			str[i] = s2[j];
	}
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
