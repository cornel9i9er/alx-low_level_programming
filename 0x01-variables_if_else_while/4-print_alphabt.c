#include<stdio.h>

/**
 * main - Prints out a-z lowercase except e, q followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 97; j <= 122; j++)
	{
		if (j == 101 || j == 113)
			continue;
		putchar(j);
		if (j == 122)
			putchar(10);
	}
	return (0);
}
