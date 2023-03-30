#include "main.h"

/**
  * leet - function that encodes a string into 1337
  * @s: string to be encoded
  * Return: address of s
  */
char *leet(char *s)
{
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int i = 0;						/* s loop counter */
	int j = 0;						/* s1 loop counter */

	while (s[i])
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s[i] == s1[j])
				s[i] = s2[j];
		}
		i++;
	}
	return (s);
}
