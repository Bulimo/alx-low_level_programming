#include "main.h"

/**
  * _puts_recursion - prints a string
  * @s: string to be printed
  * Return: void
  */
void _puts_recursion(char *s)
{
	size_t len = 0;

	len = _strlen(s);
	if (len == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
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

	while (*(s + i++))
		len++;
	return (len);
}
