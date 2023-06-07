#include "main.h"

/**
 * factorial - recurs to find the factorial of n.
 * @n: number we get the factorial of.
 *
 * Return: -1 if n < 0 else n!
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
