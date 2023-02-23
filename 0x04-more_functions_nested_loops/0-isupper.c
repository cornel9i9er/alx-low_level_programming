#include "main.h"
/**
 *_isupper - checks uppercase char
 *@c: magic
 *
 *Return: 1 if c isupper 0 otherwise
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
