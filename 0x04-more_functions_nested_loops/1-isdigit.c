#include "main.h"
/**
 *_isdigit - checks uppercase char
 *@c: magic
 *
 *Return: 1 if c isdigit 0 otherwise
 */

int _isupper(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
