#include <stddef.h>
#include "main.h"

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
	int j;

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
	 s = (char *)malloc(sizeof(char) * len);
	for (i = 0; i <= len; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
