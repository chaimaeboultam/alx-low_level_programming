#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - initialize every element of the 2D array by 0
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}
	
