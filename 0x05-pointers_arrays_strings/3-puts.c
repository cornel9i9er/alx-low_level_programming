#include "main.h"
/**
 *_puts - magic function
 *@str: pointer to string vr
 *
 *Return: void return
 */
void _puts(char *str)
{
	while (str && (*str++) != '\0')
	{
		_putchar(*str);
	}
}
