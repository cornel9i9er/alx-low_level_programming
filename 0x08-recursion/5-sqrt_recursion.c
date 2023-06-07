#include "main.h"
unsigned int wrapper(int n, int guess);

/**
 * _sqrt_recursion - uses recursion to find the sqrt of n.
 * @n: the number to analyse.
 *
 * Return: calls the function wrapper
 */

int _sqrt_recursion(int n)
{
	return (wrapper(n, 1));
}

/**
 * wrapper - takes the number and recurss till a sqrt is found.
 * @n: the number to analyze.
 * @guess: the checking number.
 *
 * Return: -1 if no sqrt or the sqrt value.
 */
unsigned int wrapper(int n, int guess)
{
	int val =  guess * guess;

	if (val == n)
	{
		return (guess);
	}
	else if (guess > n / 2)
	{
		return (-1);
	}
	return (wrapper(n, guess += 1));
}
