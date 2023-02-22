#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
	_putchar(c[i]);
	}
	_putchar(10);
	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
