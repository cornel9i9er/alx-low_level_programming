#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - allocates an block of mem and initializes it
 * @size: number of elements in array.
 * @c: initializing value.
 *
 * Return: pointer to block of mem
 */
char *create_array(unsigned int size, char c)
{
	char *s = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
