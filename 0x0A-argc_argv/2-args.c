#include "main.h"
/**
 * main - prints all command line args.
 *
 * @argc: number of command line args.
 * @argv: pointer to array of chars.
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{	int i;

	for (i = 0; i < argc; i++)
		buffer(argv[i]);
	return (0);
}
/**
 * buffer - prints out string s.
 *
 * @s: pointer to a string.
 *
 * Return: void
 */
void buffer(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s += 1;
	}
	putchar(10);
}
