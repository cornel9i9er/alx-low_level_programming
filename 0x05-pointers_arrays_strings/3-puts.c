#include "main.h"
/**
 *_puts - magic function
 *@str: pointer to string vr
 *
 *Return: void return
 */
void _puts(char *str)
{
	int i = 0;

	while (1)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		else
		{
			break;
		}
	}
	_putchar(10);
}
