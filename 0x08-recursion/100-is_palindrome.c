#include "main.h"

int tester(char *s, int itr, int len);
int string_length(char *c, int x);

/**
 * is_palindrome - calls a tester function passing in the string.
 * @s: a pointer to the string.
 *
 * Return: calls the tester function.
 */
int is_palindrome(char *s)
{
	int len = string_length(s, 0);
	int itr = len / 2;

	return (tester(s, itr, len - 1));
}

/**
 * tester - recurs going through bth ends of the string testing it.
 * @s: a pointer to the string.
 * @itr: a cunter to the center of the string.
 * @len: the string length.
 *
 * Return: 1 if palindrome else, 0
 */
int tester(char *s, int itr, int len)
{
	if (itr == 0)
	{
		return (1);
	}
	else if (*s == *(s + len))
	{
		return (tester(s + 1, itr - 1, len - 2));
	}
	return (0);
}

/**
 * string_length - recurrs to calculate the string length.
 * @c: the string were analyzing.
 * @x: a counter fo the length.
 *
 * Return: the length of the string.
 */
int string_length(char *c, int x)
{
	if (*c != '\0')
	{
		return (string_length(c + 1, x += 1));
	}
	return (x);
}
