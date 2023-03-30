#include "main.h"

/**
  * rot13 - function that encodes a string into ROT13
  * @s: string to be encoded
  * Return: address of s
  */
char *rot13(char *s)
{
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;						/* s loop counter */
	int j = 0;						/* s1 loop counter */

	while (s[i])
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
