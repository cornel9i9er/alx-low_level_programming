#include "main.h"
/**
 * _calloc - allocates a block of mem.
 *
 * @nmemb: number of members in block.
 * @size: size of each member.
 *
 * Return: pointer to allocated block or null on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
