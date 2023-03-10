#include <stdio.h>
#include "main.h"
/**
 * main - the father of the program
 * @argc: contains command line arugument count
 * @argv: contain char string pointers of command line args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv[];
	printf("%d\n", argc - 1);
	return (0);
}
