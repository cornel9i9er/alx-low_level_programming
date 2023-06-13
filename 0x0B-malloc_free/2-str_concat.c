#include "main.h"
/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1;
	int len2;
	char *cat = NULL;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	cat = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}
	for (i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
		{
			*(cat + i) = *(s1 + i);
		}
		else if (i == len1 || i < len1 + len2)
		{
			*(cat + i) = *(s2 + i - len1);
			if (i == len1 + len2 - 1)
				*(cat + i + 1) = '\0';
		}
	}
	return (cat);
}
/**
 * _strlen - gets length of a tring
 *
 * @s: string (char *)
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (len);
	while (*s != '\0')
	{
		len++;
		s += 1;
	}
	return (len);
}
