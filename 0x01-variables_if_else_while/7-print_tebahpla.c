#include<stdio.h>

/**
 * main - Prints out z-a lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
