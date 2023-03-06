#include "main.h"

/**
 * _memcpy - copies nbytes of mem from src to dest.
 * @dest: copied to.
 * @src: copied from.
 * @n: no off bytes
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
