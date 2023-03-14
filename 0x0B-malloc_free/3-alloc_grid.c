#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Hypothetical fxn alllcating mem for 2-dim array of integers
 * @width: Dimenaion 1.
 * @height: Dimension 2.
 *
 * Return: null if less than 0
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int **grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	int i = 0;

	while (i < height)
	{
		i++;
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			int j = 0;

			while (j < i)
			{
				j++;
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		int j = 0;

		while (j < width)
		{
			j++;
			grid[i][j] = 0;
		}
	}

	return (grid);
}
