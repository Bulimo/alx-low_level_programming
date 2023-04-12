#include "main.h"

/**
  * alloc_grid - creates a 2-dimensional array
  * @width: number of columns
  * @height: number of rows
  * Return: pointer to 2-dimensional array, NULL otherwise
  */
int **alloc_grid(int width, int height)
{
	int i = 0;					/* rows counter */
	int j = 0;					/* columns counter */
	int **grid;					/* pointer to 2-d array */

	if (!height || !width)
		return (NULL);

	grid = malloc(sizeof(int *) * height + sizeof(int) * width * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)((char *)grid + sizeof(int *) * height +
				sizeof(int) * width * i);
		if (grid[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
