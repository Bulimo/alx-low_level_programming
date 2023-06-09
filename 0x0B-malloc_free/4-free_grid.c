#include "main.h"

/**
  * free_grid - free memory allocated to a 2-d array
  * @grid: 2-d array pointer
  * @height: height of the array (columns)
  * Return: void
  */

void free_grid(int **grid, int __attribute__((unused))height)
{
		free(grid);
		grid = NULL;
}

