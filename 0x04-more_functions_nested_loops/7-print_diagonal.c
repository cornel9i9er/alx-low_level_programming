#include "main.h"
/**
 *print_diagonal - prints a length based line
 *@n: magic num
 *
 *Return: always 0
 */
void print_diagonal(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = n; i > 0; i--)
		{
			_putchar('\');
		}
		_putchar(10);
	}
}
