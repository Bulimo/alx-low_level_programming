#include "main.h"

/**
  * string_toupper - changes all lowercase letters to uppercase
  * @s: string to change case
  * Return: string with case changed to uppercase
  */
char *string_toupper(char *s)
{
	int i = 0;				/* loop counter */

	while (*(s + i))
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] -= ('a' - 'A');
		++i;
	}
	return (s);
}
