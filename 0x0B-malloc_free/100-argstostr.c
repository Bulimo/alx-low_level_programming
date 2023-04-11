#include "main.h"

/**
  * argstostr - concatenates all arguments of the program
  * @ac: number of arguments
  * @av: pointer to array of argument strings
  * Return: pointer to string, NULL otherwise
  */
char *argstostr(int ac, char **av)
{
	int i = 0;					/* loop counter */
	int j = 0;					/* new string loop counter */
	int k = 0;					/* argument string loop counter */
	int len = 0;				/* get length */
	char *s = NULL;				/* pointer to new string */

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}

	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);
		for (k = 0; k < len; k++, j++)
			s[j] = *(av[i] + k);
		s[j] = '\n';
		j++;
	}
	s[j] = '\0';

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
