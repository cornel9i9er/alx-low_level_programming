#include "main.h"

/**
 * _pow - does power calculations on integer values.
 * @n: the base.
 * @i: the indice.
 *
 * Return: n power i
 */
long int _pow(int n, int i)
{
	int j;
	int pow = 1;

	if (i == 0)
	{
		return (1);
	}
	for (j = 0; j < i; j++)
	{
		pow *= n;
	}
	return (pow);
}
