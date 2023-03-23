#include "main.h"

/**
  * print_square - function that prints a square followed by a new line
  * @size: determines the size of the square
  * Return: void
  */
void print_square(int size)
{
	int i = 0;		/* length of the square */
	int j = 0;		/* width of the square */

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
