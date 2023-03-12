#include <stdlib.h>
#include <stdio.h>

void check(int *n, int *coins);

/**
 * main - calculates change in 25, 10, 5, 2 or 1 cent.
 * @argc: commnd line argument of type int gives number of args + 1
 * @argv: command line arg, stores pointer array to command line ags.
 *
 * Return: least possible coins given.
 */
int main(int argc, char *argv[])
{
	int n = 0;
	int coins = 0;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
	}
	if (n < 0)
	{
		putchar(48);
		putchar(10);
	}
	else
	{
		check(&n, &coins);
		printf("%d\n", coins);
	}
	return (0);
}

/**
 * check - calculates least possile coins to give.
 * @n: pointer to sum value of coins.
 * @coins: pointer to number of coins to give.
 *
 * Return: void return.
 */
void check(int *n, int *coins)
{
	while (1)
	{
		if (*n == 0)
		{
			break;
		}
		if (*n >= 25)
		{
			*coins += (int)(*n / 25);
			*n = *n % 25;
		}
		else if (*n >= 10)
		{
			*coins += (int)(*n / 10);
			*n = *n % 10;
		}
		else if (*n >= 5)
		{
			*coins += (int)(*n / 5);
			*n = *n % 5;
		}
		else if (*n >= 2)
		{
			*coins += (int)(*n / 2);
			*n = *n % 2;
		}
		else if (*n == 1)
		{
			*coins++;
			*n--;
		}
	}
}
