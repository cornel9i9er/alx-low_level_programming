#include "main.h"
/**
 * _islower - check if c is lowwercase
 * @c: value taken for checking
 *
 * Return: 0 if upper 1 if lower
 */

int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
