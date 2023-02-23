#include "main.h"
/**
 *print_most_numbers - print 0-9 ex 2,4
 *
 *
 *Return: always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 52 || i == 50)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar(10);
}
