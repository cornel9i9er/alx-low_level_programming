#include "main.h"
/**
 * main - multiplies 2 ints from commandline
 *
 * @argc: number of command line args.
 * @argv: array of pointers to command line args.
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *E = "Error";
	int i;
	unsigned int result;
	int *arr = NULL;

	if (argc != 3)
	{
		buffer(E);
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	arr = malloc(sizeof(int) * _log(result));
	if (result < 0)
	{
		putchar('-');
		result *= -1;
	}
	array(result, arr);
	for (i = _log(result) - 1; i >= 0; i--)
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
