#include<stdio.h>

/**
 * main - Prints out a-z lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
		if (i == 122)
		{
			putchar(10);
		}
	}
	return (0);
}
