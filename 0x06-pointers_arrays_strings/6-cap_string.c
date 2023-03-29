#include "main.h"

/**
  * cap_string - function that capitalizes words of a string
  * @s: string to capitalize words
  * Return: address to s with capitalized words
  */
char *cap_string(char *s)
{
	int i = 0;				/* loop counter */
	int capitalize = 1;		/* check for characters to capitalize */

	while (s[i])
	{
		if (s[i] == '\t' || s[i] == ' ' || s[i] == '\n' || s[i] == ',' ||
				s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
				s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}')
			capitalize = 1;
		else
		{
			if (capitalize && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 'a' - 'A';
			capitalize = 0;
		}
		i++;
	}
	return (s);
}
