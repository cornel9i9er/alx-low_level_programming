#include <stdio.h>

/**
 * main - Prints out 0-9 separated by commas and spaces
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int comma = 44;
	int space = 32;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
		putchar(comma);
		putchar(space);
		}
		else
		{
			continue;
		}
	}
	return (0);
}
