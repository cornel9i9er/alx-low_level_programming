#include "main.h"
/**
 * main - calculates least number of coins worth passed arg.
 *
 * @argc: number of command line args.
 * @argv: array of pointers to command line args.
 *
 * Return: 0 if success 1 otherwise.
 */
int main(int argc, char *argv[])
{
	char *E = "Error";
	int coins[] = {25, 10, 2, 5, 1};
	int money = atoi(argv[argc - 1]);
	int count = 0;
	int i;
	int *arr = NULL;

	if (argc != 2)
	{
		buffer(E);
		return (1);
	}
	else if (atoi(argv[argc - 1]) <= 0)
	{
		putchar('0');
		putchar(10);
	}
	for (i = 0; i < 5; i++)
	{
		if (money >= coins[i])
		{
			count += money / coins[i];
			money %= coins[i];
		}
	}
	arr = malloc(sizeof(int) * _log(count));
	array(count, arr);
	for (i = _log(count) - 1; i >= 0; i--)
	{
		putchar('0' + arr[i]);
	}
	putchar(10);
	free(arr);
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
/**
 * array - separates a number into individual digits.
 *
 * @c: the number.
 * @arr: pointer to an external array.
 *
 * Return: an array containing the individual digits.
 */
int *array(int c, int arr[])
{
	int i = 0;

	while (true)
	{
		if (c < 10)
		{
			arr[i] = c;
			break;
		}
		arr[i] = c % 10;
		c -= arr[i];
		c /= 10;
		i++;
	}
	return (arr);
}
/**
 * _log - gets log base ten of a number ignoring decimals
 *
 * @n: integer.
 *
 * Return: log base 10 of a number.
 */
int _log(int n)
{
	int len = 0;

	while (true)
	{
		if (n < 10)
		{
			len++;
			break;
		}
		n /= 10;
		len++;
	}
	return (len);
}
