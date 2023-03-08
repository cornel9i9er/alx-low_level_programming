#include "main.h"

int string_length(char *c, int x);

/**
 * _strlen_recursion - calls a recurring function.
 * @s: a pointer to the string
 *
 * Return: calls the function that returns the string length
 */
int _strlen_recursion(char *s)
{
	return (string_length(s, 0));
}

/**
 * string_length - recurrs to calculate the string length.
 * @c: the string were analyzing.
 * @x: a counter fo the length.
 *
 * Return: the length of the string.
 */
int string_length(char *c, int x)
{
	if (*c != '\0')
	{
		return (string_length(c + 1, x += 1));
	}
	return (x);
}
