#include "main.h"
/**
 *_puts - magic function
 *@str: pointer to string vr
 *
 *Return: void return
 */
void _puts(char *str)
{
	while (1)
	{
		if (*str != '\0')
		{
			_putchar(*str);
			*str++;
		}
		else
		{
			_putchar('\0');
			break;
		}
	}
	_putchar(10);
}
