#include "main.h"
/**
 * argstostr - concatenates cmd line args in a str.
 *
 * @ac: number of command line args.
 * @av: pointer array to cmd line args.
 *
 * Return: pointer to concatenated str.
 */
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		while (*av[i] != '\0')
		{
			*str = *av[i];
			av[i] += 1;
			str += 1;
			if (*av[i] == '\0')
			{
				*str = '\n';
				str += 1;
			}
		}
		i++;
		if (i == ac - 1)
			*str = '\0';
	}
	str -= len;
	return (str);
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
