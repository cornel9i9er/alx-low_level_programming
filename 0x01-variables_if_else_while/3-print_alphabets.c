#include<stdio.h>

/**
 * main - Prints out a-z lowercase followed by A-Z upper a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (j = 97; j <= 122; j++)
	{
		putchar(j);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
		if (i == 90)
		{
			putchar(10);
		}
	}
	return (0);
}
