#include "main.h"

/**
  * free_grid - free memory allocated to a 2-d array
  * @grid: 2-d array pointer
  * @height: height of the array (columns)
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int i = 0;				/* columns counter */

	if (grid)
	{

		for (i = 0; i < height; i++)
			free(grid[i]);

		free(grid);
		grid = NULL;
	}
}

