#include "main.h"
/**
 * _strdup - Duplicates a passed string.
 *
 * @str: string to duplicate.
 *
 * Return: pointer to the duplicate string.
 */
char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *dup = NULL;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		len++;
		str += 1;
	}
	str -= len;
	dup = malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		*(dup + i) = *(str + i);
		if (i == len - 1)
			*(dup + i + 1) = '\0';
	}
	return (dup);
}
