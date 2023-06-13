#include "main.h"
/**
 * strtow - splits string into words.
 *
 * @str: string to split.
 *
 * Return: pointer array to strings.
 */
char **strtow(char *str)
{
	char **strarr = NULL;
	char *ptr = str;
	int n = 0;
	int height = 0;
	int index = 0;
	int i;

	if (str == NULL || _strlen(str) == 0)
		return (NULL);
	while (ptr != NULL)
	{
		ptr = traverse(ptr + n, &n);
		height++;
	}
	strarr = malloc(sizeof(char *) * height + 1);
	if (strarr == NULL)
	{
		free(strarr);
		return (NULL);
	}
	while (1)
	{
		str = traverse(str + n, &n);
		if (str == NULL)
			break;
		strarr[index] = malloc(sizeof(char) * (n + 1));
		if (strarr[index] == NULL)
		{	_free(strarr, index);
			return (NULL); }
		for (i = 0; i < n; i++)
		{
			*(strarr[index] + i) = *(str + i);
			if (i == n - 1)
				*(strarr[index] + i + 1) = '\0';
		}
		index++;
	}
	strarr[height + 1] = malloc(sizeof(NULL));
	strarr[height + 1] = NULL;
	return (strarr);
}
/**
 * traverse - welcome to the voi of confusion
 *
 * @s: pointer to string.
 * @i: int pointer.
 *
 * Return: yes, return to where you came from.
 */
char *traverse(char *s, int *i)
{
	*i = 0;
	if (*s == ' ')
	{
		while (*s == ' ')
		{
			s += 1;
		}
	}
	while (*s != ' ')
	{
		if (*s == '\0')
			return (NULL);
		(*i)++;
		s += 1;
	}
	s -= *i;
	return (s);
}
/**
 * _strlen - get length of a string.
 *
 * @s: pointer to a string.
 *
 * Return: length of string as an int.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s += 1;
	}
	return (len);
}
/**
 * _free - frees mem to where allocated
 *
 * @ptr: 2d array pointer.
 * @index: number of allcated spaces.
 *
 * Return: void.
 */
void _free(char **ptr, int index)
{
	int i;

	for (i = 0; i <= index; i++)
	{
		free(ptr[i]);
		if (i == index)
			free(ptr);
	}
}
