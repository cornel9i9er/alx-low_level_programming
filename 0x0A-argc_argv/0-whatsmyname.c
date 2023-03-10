#include <stdio.h>

/**
 * main - the father of the program
 * @argc: contains command line arugument count
 * @argv: contain char string pointers of command line args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void) argc;
	while (1)
	{
		if (argv[0][i] != '\0')
		{
			putchar(argv[0][i]);
			i++;
		}
		else
		{	putchar(10);
			break;
		}
	}
	return (0);
}
