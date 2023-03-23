#include"main.h"

/**
  * print_triangle - function that prints a triangle followed by a new line
  * @size: the size of the triangle
  * Return: void
  */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 0;		/* count the rows */
		int j = 0;		/* count the spaces */
		int k = 0;		/* count the # */

		for (i = 1; i <= size; i++)
		{
			for (j = (size - i); j > 0; j--)
				_putchar(' ');
			for (k = 1; k <= i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
