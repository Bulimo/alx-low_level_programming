#include "main.h"

/**
  * puts2 - function prints every other string dtarting from the 1st character
  * @str: string to be printed
  * Return: void
  */
void puts2(char *str)
{
	int i = 0;				/* loop counter */

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
