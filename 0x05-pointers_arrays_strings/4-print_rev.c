#include "main.h"
/**
 * print_rev - len string
 *@s: sring array
 *
 *Return: always 0
 */
void print_rev(char *s)
{
	int ret = 0;

	while (s && (*s++) != '\0')
	{
		ret++;
	}
	int i;

	for (i = ret; i >= 0 ; i--)
	{
		_putchar(*(s + i));
	}
	_putchar(10);
}

