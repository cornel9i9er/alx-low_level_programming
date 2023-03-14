#include <stddef.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocates a membloc and copies a string in it.
 * @str: allocated string.
 *
 * Return: pointer to new string on new mem block
 */
char *_strdup(char *str)
{
	char *s;
	int len = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (1)
	{
		if (*(str + i) != '\0')
		{
			len++;
			i++;
		}
		else
		{
			break;
		}
	}
	s = (char *)malloc(sizeof(char) * (len +  1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
