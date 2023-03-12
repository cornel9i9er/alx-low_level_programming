#include "main.h"
int checkint(char c);

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
