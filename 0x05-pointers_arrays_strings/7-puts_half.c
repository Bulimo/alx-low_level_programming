#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string to be printed
  * Return: void
  */
void puts_half(char *str)
{
	int len = 0;			/* store the length of the string */
	int i = 0;				/* loop counter */

	while (*(str + i++))
		len++;
	if ((len % 2))
		i = (len - 1) / 2;
	else
		i = len / 2;
	for (; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}

