#include "main.h"

/**
  * is_palindrome - function that checks if a string is a palindrome
  * @s: string to be checked
  * Return: 1 if s is a palindrome, otherwise 0
  */
int is_palindrome(char *s)
{
	int i = 0;				/* count fron index 0 */
	int j = 0;				/* count from last index */
	int len = 0;			/* get string length */

	if (!(*s))
		return (1);
	len = _strlen_recursion(s);
	i = 0;
	j = len - 1;
	return (palindrome_check(s, i, j));
}

/**
  * palindrome_check - checks the individual characters of the string match
  * @s: string to check
  * @i: counter from index 0
  * @j: counter from last index
  * Return: 1 if a palindrome, otherwise 0
  */
int palindrome_check(char *s, int i, int j)
{
	if (j <= i)
		return (1);
	if (s[i] != s[j])
		return (0);
	i++;
	j--;
	return (palindrome_check(s, i, j));
}

/**
  * _strlen_recursion - calculates the length of the string
  * @s: string to get length
  * Return: int length of string
  */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
