#include "main.h"
/*
 * malloc_checked - allocates mem and checks if pointer failed.
 *
 * @b: allocated mem in bytes.
 *
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL || b <= 0)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
