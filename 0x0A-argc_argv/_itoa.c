#include <stdio.h>
#include "main.h"
#include "_strlen.c"

void rev(char *s, int len);

/**
 * _itoa - prints out int using putchar
 * @n: integer to print
 *
 * Return: void.
 */
void _itoa(int n)
{
	char s[] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
	int i = 0;

	putchar(*(s + 2));
	while (1)
	{
		if (n % 10 == 0)
		{
			*(s + i) = 48;
			n /= 10;
			i++;
		}
		else if (n < 10)
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
	putchar(10);
	rev(s, _strlen(s));
}

/**
 * rev - reverses s and prints it out
 * @s: pointer to the string to reverse
 * @len: length of s
 *
 * Return: void.
 */
void rev(char *s, int len)
{
	int z;
	int i;
	int j;

	for (i = 0; i < len / 2; i++)
	{
		z = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = z;
	}
	for (j = 0; j < len; j++)
	{
		putchar(*(s + j));
	}
	putchar(10);
}
