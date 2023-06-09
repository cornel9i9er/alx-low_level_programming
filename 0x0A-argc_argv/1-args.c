#include "main.h"
/**
 * main - prints number of command line args
 *
 * @argc: nuumber of commandline args.
 * @argv: unused
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	putchar('0' + argc - 1);
	putchar(10);
	return (0);
}
