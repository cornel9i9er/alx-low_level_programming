#include "main.h"
int _strlen(char *s, int x);
int reverse(char *s, int x);

/**
 * _print_rev_recursion - calls a function that calls a function.
 * @s: the string to analyze.
 *
 * Return: of void type no return expected.
 */
void _print_rev_recursion(char *s)
{
	_strlen(s, 0);
}

/**
 * _strlen - gets length of s before calling a reversing function
 * @s: the string to analyze.
 * @x: a counter for string length.
 *
 * Return: calls a reversing function.
 */
int _strlen(char *s, int x)
{
	if (*s != '\0')
	{
		return (_strlen(s + 1, x += 1));
	}
	return (reverse(s - 1, x));
}

/**
 * reverse - prints out a erversed string s.
 * @s: the string to reverse.
 * @x: down counts to keep in mem block.
 *
 * Return: prints out a reversed string.
 */
int reverse(char *s, int x)
{
	if (x == 0)
	{
		return (1);
	}
	_putchar(*s);
	return (reverse(s - 1, x -= 1));
}
