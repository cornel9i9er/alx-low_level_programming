#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - goes to 98 then stops printing
 *
 *@n: our magic number
 *
 *Return: nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (n < 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d ", i);
			}
		}
	}
	else
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (n < 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d ", i);
			}
		}
	}
}
