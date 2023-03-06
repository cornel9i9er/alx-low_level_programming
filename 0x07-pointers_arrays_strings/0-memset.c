#include "main.h"

/**
 * _memset -writes a constant byte to ranged mem.
 * @s: ranged mem pointer.
 * @b: constant byte to be written.
 * @n: actual range.
 * Return: poniter to the mem block.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
