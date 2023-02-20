#include<stdio.h>

/**
 * main - Prints out 0-9 followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
		if (j == 57)
			putchar(10);
	}
	return (0);
}
