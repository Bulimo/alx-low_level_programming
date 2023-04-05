#include "main.h"

/**
  * _print_rev_recursion - function that prints a string in reverse
  * @s: string to be printed
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	int len = 0;				/* get length of s */

	len = _strlen_recursion(s);
	if (!(*s))
	{
		/*_putchar('\n'); */
		return;
	}
	print_reverse(s, len);
}

/**
  * print_reverse - prints characters of the string
  * @s: string to print
  * @len: character index offset of s to print
  * Return: void
  */
void print_reverse(char *s, int len)
{
	len--;
	if (len == 0)
	{
		_putchar(*s);
		/*_putchar('\n'); */
		return;
	}
	_putchar(s[len]);
	print_reverse(s, len);
}

/**
  * _strlen_recursion - returns the length of a string
  * @s: string to calculate the length
  * Return: int length of s
  */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
