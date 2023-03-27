#include "main.h"

/**
  * print_rev - function that prints a string in reverse order
  * @s: pointer to string to be printed
  * Return: void
  */
void print_rev(char *s)
{
	int len = 0;				/* Store the strirng length */
	int i = 0;					/* loop counter */

	len = _strlen(s);

	for (i = (len - 1); i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
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
