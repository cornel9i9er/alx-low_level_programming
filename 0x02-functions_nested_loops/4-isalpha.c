#include "main.h"
/**
 *_isalpha - checks alphanumeric chars
 *@c: input val
 *
 *Return: 1 if alpha 0 if not
 *
 */
int _isalpha(int c)
{
	int i;
	int j;
	int upper;
	int lower;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			upper = 1;
		}
	}
	for (j = 97; j <= 122; j++)
	{
		if (c == j)
		{
			lower = 1;
		}
	}
	if (lower || upper)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
