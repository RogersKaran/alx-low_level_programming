#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Hypothetical fxn allocating mem for a 2D array of ints.
 * @grid: Pointer to the 2D array of integers.
 * @height: NUmber of rows in the  2D array.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
