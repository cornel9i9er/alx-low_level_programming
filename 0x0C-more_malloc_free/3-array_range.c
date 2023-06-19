#include "main.h"
/**
 * array_range - allocates mem and initializes it with a range.
 *
 * @min: min value of range.
 * @max: max value of range.
 *
 * Return: pointer to allocated mem or null on failure.
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < max - min; i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
}
