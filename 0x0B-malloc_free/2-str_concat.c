#include "main.h"
#include <stddef.h>
#include <stdlib.h>
void *set(char *s, char *s1, char *s2, int len1, int len2);
/**
 * str_concat - concatenates 2 str on allocated mem block
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to llocated mem block.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int itr = 0;
	char *s;

	if (s1 == NULL)
		*s1 = "";
	else if (s2 == NULL)
		*s2 = "";
	while (1)
	{
		if (itr == 0)
		{
			if (*(s1 + i) != '\0')
			{
				len1++;
				i++;
			}
			else
			{
				itr++;
				i = 0;
			}
		}
		else if (itr == 1)
		{
			if (*(s2 + i) != '\0')
			{
				len2++;
				i++;
			}
			else
			{
				break;
			}
		}
	}
	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	set(s, s1, s2, len1, len2);
	return (s);
}

/**
 * set - does th cat magic
 * @s: allocated str block
 * @s1: str 1
 * @s2: str 2
 * @len1: str1 len
 * @len2: str2 len
 *
 * Return: void
 */
void *set(char *s, char *s1, char *s2, int len1, int len2)
{
	int i;

	for (i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
			*(s + i) = *(s1 + i);
		else
			*(s + i) = *(s2 + (i - len1));
	}
}
