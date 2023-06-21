#include "3-calc.h"
/**
 * main - acts as a clculator.
 *
 * @argc: cmd inne args count.
 * @argv: array of pointers to cmd line args
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		puts("Error");
		exit(99);
	}
	if ((*(argv[2]) == '%' || *(argv[2]) == '/') && *(argv[3]) == '0')
	{
		puts("Error");
		exit(100);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
