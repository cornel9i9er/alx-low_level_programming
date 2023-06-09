#include "main.h"
/**
 * main - main function.
 *
 * @argc: number of command line args.
 * @argv: array of pointers to char strings of command line args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	buffer(argv[argc - 1]);
	return (0);
}
/**
 * buffer - prints out a whole string.
 *
 * @s: a pointer to the string.
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
