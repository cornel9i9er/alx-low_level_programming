#include "main.h"
/**
 * _strspn - finction points to a string .
 * @s: said string.
 * @accept: chars accepted in string
 *
 * Return: always 0*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int size = 0;
	int ac_len = 0;
	int ac = 0;
	unsigned int check = 0;
	
	while (1)
	{
		if(accept[i] != '\0')
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
		check = size;
		for (i = 0; i < ac_len; i++)
		{
			if (s[j] == accept[i])
			{
				size++;
			}
		}
		if (check == size)
		{
			return (size);
		}
		j++;
	}
}
