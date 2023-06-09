#include "main.h"
/**
 * main - adds command line args assume all positive values.
 *
 * @argc: number of command line args.
 * @argv: pointer array to command line args.
 *
 * Return: 0 if sucess 1 otherwise.
 */
int  main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int *arr = NULL;
	char *E = "Error";

	if (argc == 1)
	{
		putchar('0');
		putchar(10);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (checker(argv[i]) == 0)
		{
			buffer(E);
			return (1);
		}
		sum += atoi(argv[i]);
	}
	arr = malloc(sizeof(int) * _log(sum));
	if (sum < 0)
	{
		putchar('-');
		sum *= -1;
	}
	array(sum, arr);
	for (i = _log(sum) - 1; i >= 0; i--)
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
 * checker - checks if passed array contains digits only.
 *
 * @s: array of chars.
 *
 * Return: 0 if not a digit, 1 otherwise.
 */
int checker(char *s)
{
	int i;

	while (*s != '\0')
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (*s == '-')
			{
				s += 1;
				i = '0';
			}
			else if (*s == i)
			{
				break;
			}
			else if (i == '9')
			{
				return (0);
			}
		}
		s += 1;
	}
	return (1);
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
