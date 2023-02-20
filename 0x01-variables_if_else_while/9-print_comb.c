#include <stdio.h>

/**
 * main - Prints out 0-9 separated by commas and spaces
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int comma = 44;
	int space = 32;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			comma = 36;
			space = 10;

		}
		else
		{
			comma = 44;
			space = 32;

		}
		putchar(comma);
		putchar(space);
	}
	return (0);
}
