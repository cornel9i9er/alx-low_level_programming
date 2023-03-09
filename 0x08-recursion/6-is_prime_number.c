#include "main.h"

int _wrapper(int n, int t);
int _sqrt(int n, int guess);

/**
 * is_prime_number - checks if a number is prime.
 * @n: the number to check.
 *
 * Return: 0 if not prime else 1.
 */
int is_prime_number(int n)
{
	return (_wrapper(n, 2));
}

/**
 * _wrapper - recurs to check if no is divisible by gesses val.
 * @n: number to check.
 * @t: the guess.
 *
 * Return: 0 if a number is divisible by guess, else 1.
 */
int _wrapper(int n, int t)
{
	int extra = _sqrt(n, 1);

	if (n < 0 || n == 1)
	{
		return (0);
	}
	else if (t > extra)
	{
		return (1);
	}
	else if (n % t != 0)
	{
		return (_wrapper(n, t + 1));
	}
	return (0);
}

/**
 * _sqrt - finds the square rt of n.
 * @n: number to evaluate.
 * @guess: guessed root number.
 *
 * Return: approx square root of n or actual root of n.
 */
int _sqrt(int n, int guess)
{
	int val =  guess * guess;

	if (val == n)
	{
		return (guess);
	}
	else if (val > n)
	{
		return (guess - 1);
	}
	return (_sqrt(n, guess + 1));
}
