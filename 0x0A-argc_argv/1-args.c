#include <unistd.h>
#include "main.h"

/**
 * main - the father of the program
 * @argc: contains command line arugument count
 * @argv: contain char string pointers of command line args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char c[10];
	int i = 0;

	_itoa(argc - 1, c);
	(void) argv;
	while (1)
	{
		if (*(c + i) != '\0')
		{
			write(1, c + i, sizeof(char));
			i++;
		}
		else
		{
			break;
		}
	}
	_putchar(10);
	return (0);
}

/**
 * _itoa - prints out int using putchar
 * @n: integer to print
 * @s: pointer to an empty char aray
 * Return: void.
 */
void _itoa(int n, char *s)
{
	int i = 0;
	char z;
	int it = 0;
	int k;
	int len = 0;

	while (1)
	{
		if (n < 10)
		{
			*(s + i) = 48 + n;
			*(s + i + 1) = '\0';
			break;
		}
		else
		{
			*(s + i) = 48 + (n % 10);
			n -= n % 10;
			n /= 10;
			i++;
		}
	}
	while (1)
	{
		if (*(s + it) != '\0')
		{
			len++;
			it++;
		}
		else
		{
			break;
		}
	}
	for (k = 0; k < len / 2; k++)
	{
		z = *(s + k);
		*(s + k) = *(s + len - 1 - k);
		*(s + len - 1 - k) = z;
	}
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
