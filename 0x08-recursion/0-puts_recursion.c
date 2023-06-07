#include "main.h"

/**
 * _puts_recursion - uses recursion to print out a string.
 * @s: pointer to the string.
 *
 * Return: this is a void return.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
