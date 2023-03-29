#include "main.h"

/**
  * _strcmp - function to compare two strings
  * @s1: first string to compare
  * @s2: second string to compare
  * Return: int difference in strings
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;				/* loop counter */
	int result = 0;			/* hold the difference */

	while (*(s1 + i) && *(s2 + i))
	{
		result = s1[i] - s2[i];
		if (result > 0 || result < 0)
			break;			/* stop the iteration */
		++i;
	}
	return (result);
}
