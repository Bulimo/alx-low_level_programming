#include "main.h"

/**
  * _puts - function that prints a string
  * @str: pointer to string to be printed
  * Return: void
  */
void _puts(char *str)
{
	/* int len = 0;				Store the strirng length */
	int i = 0;					/* loop counter */

	while (*(str + i))
		_putchar(*(str + i++));
	_putchar('\n');
}
