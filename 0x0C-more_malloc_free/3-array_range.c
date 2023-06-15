#include "main.h"

int *array_range(int min, int max)
{
	void *ptr = NULL;
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