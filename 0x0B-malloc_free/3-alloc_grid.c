#include <stdlib.h>

/**
 * alloc_grid - Create a 2 dimensional array
 * @width: width of grid (columns)
 * @height: height of grid (rows)
 *
 * Return: pointer to 2D array, NULL if fails
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	i = 0;
	if (height <= 0 || width <= 0)
		return (NULL);
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	return (grid);
}
