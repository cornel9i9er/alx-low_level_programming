#include "main.h"
/**
 * string_nconcat - concatenates s1 with n bytes of s2.
 *
 * @s1: string 1.
 * @s2: string 2.
 * @n: no of bytes.
 *
 * Return: pointer to concat string or null on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat = NULL;

	if (n > _strlen(s2))
		n = _strlen(s2);
	cat = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}
	concat(s1, s2, n, cat);
	return (cat);
}
/**
 * _strlen - gets length of a string.
 *
 * @s: string.
 *
 * Return: length of string.
 */
unsigned int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		len++;
		s += 1;
	}
	return (len);
}
/**
 * concat - concatenates the string.
 *
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes of s2 to concat.
 * @cat: the concat string.
 *
 * Return: void.
 */
void concat(char *s1, char *s2, int n, char *cat)
{
	int len1 = _strlen(s1), i;

	for (i = 0; i < len1 + n ; i++)
	{
		if (i < len1)
		{
			cat[i] = *(s1 + i);
		}
		else if (i == len1 || i < len1 + n)
		{
			*(cat + i) = *(s2 + i - len1);
		}
		if (i == len1 + n - 1)
		{
			*(cat + i + 1) = '\0';
		}
	}
}
