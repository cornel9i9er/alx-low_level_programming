#include "main.h"
char *find_forward(char c, char *s);
char *find_next_char(char *s);
int iter(char *s, char *p);

/**
 * wildcmp - compares a string with another
 *
 * @s1: string.
 * @s2: pattern
 *
 * Return: 1 if compared 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (iter(s1, s2));
}
/**
 * find_forward - seeks a character forwards
 *
 * @c: character.
 * @s: string.
 *
 * Return: pointer to char c in string s
 */
char *find_forward(char c, char *s)
{
	if (*s == '\0')
		return (NULL);
	if (*s != c)
		return (find_forward(c, s + 1));
	return (s);
}
/**
 * find_next_char - finds next vahr inn pattern.
 *
 * @s: string pattern
 *
 * Return: pointer to next char in pattern
 */
char *find_next_char(char *s)
{
	if (*s == '*')
		return (find_next_char(s + 1));
	if (*s == '\0')
		return (NULL);
	return (s);
}
/**
 * iter - iterates through string and pattern
 *
 * @s: string.
 * @p: pattern
 *
 * Return: 1 if match 0 if not
 */
int iter(char *s, char *p)
{
	if (*p == '*')
	{
		p = find_next_char(p);
		if (p == NULL)
			return (1);
		s = find_forward(*p, s);
		if (s == NULL)
			return (0);
	}
	if (*s == *p)
	{
		if (*s == '\0' || *p == '\0')
			return (1);
		return (iter(s + 1, p + 1));
	}
	return (0);
}
