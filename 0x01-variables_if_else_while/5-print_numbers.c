#include <stdio.h>

/**
 * main - print single digits from zero to 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	while (a <= 10)
	{
		if (a == 10)
		{
			printf("\n");
			a++;
			continue;
		}
		printf("%d", a);
		a++;
	}
	return (0);
}
