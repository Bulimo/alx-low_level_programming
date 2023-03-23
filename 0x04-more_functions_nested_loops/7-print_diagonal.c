#include "main.h"

/**
  * print_diagonal - function that draws a diagonal line on the terminal
  * @n: holds the length of the diagonal line
  * Return: void
  */
void print_diagonal(int n)
{
	int i = 0;		/* for iterating the rows */
	int j = 0;		/* iterating the spaces */

	if (n > 0)
		{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
