#include "main.h"
/**
 * free_grid - frees mem allocated to a 2d array.
 *
 * @grid: 2d array to free.
 * @height: rows in array.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
