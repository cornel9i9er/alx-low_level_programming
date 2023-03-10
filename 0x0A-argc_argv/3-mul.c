#include <stdio.h>
#include "main.h"
int _strlen(char *s);
int checkint(char c);
long int _atoi(char *n, int len);
long int _pow(int n, int i);

/**
 * main - the father of the program
 * @argc: contains command line arugument count
 * @argv: contain char string pointers of command line args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a = _atoi(argv[2], _strlen(argv[2]));
	int b = _atoi(argv[1], _strlen(argv[1]));
	int result = a * b;

	if (argc == 1)
	{
		puts("Error");
		return (1);
	}
	printf("%ld\n", result);
	return (0);
}

/**
 * _strlen - calculates length of string
 * @s: a pointer to the string
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (1)
	{
		if (*(s + i) != '\0')
		{
			len++;
			i++;
		}
		else
		{
			return (len);
		}
	}
	return (1);
}

/**
 * _atoi - convertss string into integer.
 * @n: a pointer to the string.
 * @len: the length of the string.
 *
 * Return: an integer value else -1
 */
long int _atoi(char *n, int len)
{
	int i;
	int num = 0;

	for (i = 0; i < len; i++)
	{
		if (checkint(*(n + len - i - 1)) == '-')
		{
			return (-num);
		}
		else if (checkint(*(n + len - i - 1)) == '+')
		{
			return (+num);
		}
		num += checkint(*(n + len - i - 1)) * _pow(10, i);
	}
	return (num);
}

/**
 * checkint - check if a character value is equal to an int.
 * @c: the character value.
 *
 * Return: an int value or -1
 */
int checkint(char c)
{
	int i;
	int j = 0;

	for (i = 48; i < 58; i++)
	{
		if (c == i)
		{
			return (j);
		}
		j++;
	}
	if (c == '-')
	{
		return ('-');
	}
	return ('+');
}

/**
 * _pow - does power calculations on integer values.
 * @n: the base.
 * @i: the indice.
 *
 * Return: n power i
 */
long int _pow(int n, int i)
{
	int j;
	int pow = 1;

	if (i == 0)
	{
		return (1);
	}
	for (j = 0; j < i; j++)
	{
		pow *= n;
	}
	return (pow);
}
