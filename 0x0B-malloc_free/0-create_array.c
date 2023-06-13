#include "main.h"
/**
 * create_array - creates an array(char *), initializes it with a specific char
 *
 * @size: size of array to create.
 * @c: initializing char.
 *
 * Return: pointer to created array, or NULL on failure.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = NULL;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
		if (i == size - 1)
			*(arr + i + 1) = '\0';
	}
	return (arr);
}
