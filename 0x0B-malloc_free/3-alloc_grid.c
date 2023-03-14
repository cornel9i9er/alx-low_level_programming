#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - allocate a 2d array.
 * @width: width
 * @height: of array
 *
 * Return: poiner to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **n = (int **)malloc(sizeof(int *) * width * height);
	int i;

	if (height <= 0 ||  width <= 0)
		return (NULL);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		n[i] = (int *)malloc(sizeof(int) * width);
		if (n == NULL)
			return(NULL);
	}
		return (n);
}
