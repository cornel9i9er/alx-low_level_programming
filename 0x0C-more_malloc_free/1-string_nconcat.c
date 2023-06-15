#include "C:\Users\HP\Documents\C alx ox0c\main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat = NULL;

	if (n > _strlen(s2))
		n =_strlen(s2);
	cat = malloc(sizeof(char) * (_strlen(s1) + n + 1));
if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}
	concat(s1, s2, n, cat);
	return (cat);
}
unsigned int _strlen(char *s)
{
	int len = 0;
	
	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		len++;
		s += 1;
	}
	return (len);
}
void concat(char *s1, char *s2, int n, char *cat)
{
	int len1 = _strlen(s1), i;

	for (i = 0; i < len1 + n ; i++)
	{
		if (i < len1)
		{
			cat[i] = *(s1 + i);
		}
		else if (i == len1 || i < len1 + n)
		{	
			*(cat + i) = *(s2 + i - len1);
		}
		if (i == len1 + n - 1)
		{
			puts("DONE!!!");
			*(cat + i + 1) = '\0';
			printf("I: %d\n", i);
		}
	}
	printf("%d\n", _strlen(s1) + n + 1);
}