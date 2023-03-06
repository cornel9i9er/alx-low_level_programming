#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string and returns it's mem address.
 * @s: the string.
 * @c: the character to seek
 *
 * Return: pointer to char c in s or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int pos = 0;

	while (1)
	{
		if (c == '\0')
		{
			if (s[i] == '\0')
			{
				return (s + pos);
			}
		}
		else if (s[i] != '\0' && s[i] == c)
		{
			return (s + pos);
		}
		else if (s[i] == '\0')
		{
			return (NULL);
		}
		pos++;
		i++;
	}
}
