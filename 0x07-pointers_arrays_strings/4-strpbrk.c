#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates first occurence of a byte in accept
 * @s: string we are locaing the byte in.
 * @accept: bytes we are accepting.
 *
 * Return: a pointer to the first occurence of a byte in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int ac_len = 0;
	int ac = 0;

	while (1)
	{
		if (accept[i] != '\0')
		{
			ac_len++;
			i++;
		}
		else
		{
			break;
		}
		ac++;
	}
	i = 0;
	while (1)
	{
		for (i = 0; i < ac_len; i++)
		{
			if (s[j] == accept[i])
			{
				return (s + j);
			}
		}

		if (s[j] == '\0')
		{
			return (NULL);
		}
		j++;
	}
}
