#include "main.h"

/**
  * _puts_recursion - prints a string
  * @s: string to be printed
  * Return: void
  */
void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
