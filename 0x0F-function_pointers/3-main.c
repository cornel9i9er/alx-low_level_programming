#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - calculator func
 * @ac: no of comm line args + file
 * @av: pointer array to comm line args.
 *
 * Return: calc or err code.
 */
int main(int ac, char *av[])
{
	int result;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (get_op_func(av[2]) != NULL)
	{
		result = (get_op_func(av[2]))(atoi(av[1]), atoi(av[3]));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result);
	return (0);
}
