#include "main.h"
/**
 *print_square - says it all
 *
 *@size: variable
 *
 *Return: always 0
 */
void print_square(int size)
{
	int i;
	int j;

	if (size == 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
				if (j == size - 1)
				{
				_putchar(10);
				}
			}
		}
	}
}
