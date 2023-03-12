#include "main.h"

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
