#include "main.h"
/**
 * _pow_recursion - getting the powe of a number using recurion.
 * @x: the number.
 * @y: the indice.
 *
 * Return: -1 if y < 0 or x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
