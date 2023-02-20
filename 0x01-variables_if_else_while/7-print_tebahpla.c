#include<stdio.h>

/**
 * main - Prints out z-a lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 122; j <= 97; j--)
	{
		putchar(j);
		if (j == 97)
			putchar(10);
	}
	return (0);
}
