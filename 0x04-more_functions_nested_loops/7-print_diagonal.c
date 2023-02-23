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
		for (i = 0; i < n; i++)
		{
			if (i == 0)
			{
				_putchar(10);
			}
			for (j = 0; j < i; j++)
			{
				if (j == i - 1)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(32);
				}
			}
			_putchar(10);
		}
	}
}
