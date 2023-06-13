#include "main.h"
/**
 * alloc_grid - creates a 2d array.
 *
 * @width: number of columns.
 * @height: number of rows.
 *
 * Return: pointer to the array, NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i;
	int j;

	if (height <= 0 || width <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
