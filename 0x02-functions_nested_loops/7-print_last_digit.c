#include "main.h"
/**
 * print_last_digit - last digit printing
 * @x: the magic number
 *
 *Return: last
 */
int print_last_digit(int x)
{
	int last = x % 10;

	if (last < 0)
	{
		last = 0 - last;
	}
	return (last);
}
