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
			if (i == 1)
			{
				_putchar('\');
			}
			else
			{
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
