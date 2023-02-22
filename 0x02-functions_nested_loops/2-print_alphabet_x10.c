#include "main.h"
/**
 * print_alphabet - prints out lowercase alphabet followd by \n
 *
 * return - void
 */

void print_alphabet(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
			if (i == 122)
			{
				_putchar(10);
			}
		}
	}
}
