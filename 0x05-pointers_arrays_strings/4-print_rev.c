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
	int i;

	while (s && (*s++) != '\0')
	{
		ret++;
	}
	for (i = ret; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}

