#include "main.h"
/**
 *print_triangle - dis here.
 *
 *@size: migic number
 *
 *Return: always 0
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size == 0 || size < 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				int here = size - i;

				if (j == here)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
		_putchar(10);
	}
}
