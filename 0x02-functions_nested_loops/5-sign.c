#include "main.h"
/**
 * print_sign - magic
 * @n: evaluated char
 *
 * Return: 0 if zero 1 if + -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
