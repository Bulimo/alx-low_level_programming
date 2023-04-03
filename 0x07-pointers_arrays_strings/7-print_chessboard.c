#include "main.h"

/**
  * print_chessboard - function that prints chess board
  * @a: array with chess board string
  * Return: void
  */
void print_chessboard(char (*a)[8])
{
	size_t i = 0;				/* a loop counter */
	size_t j = 0;				/* a[] loop counter */

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(*(a[i] + j));
		_putchar('\n');
	}
}
