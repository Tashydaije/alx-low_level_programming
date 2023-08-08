#include <stdlib.h>

/**
 * free_grid - Free memory allocated to a previoiusly created 2D array
 * @grid: the 2D array to free mem from
 * @height: height of the 2D array
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
