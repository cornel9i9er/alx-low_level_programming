#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 
 * entry point main - checks if n i positive, zero or negative
 *
 * Return: alway return 0 
 */
int main(void)
{ 
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		puts("is zero ")
	}else if (n > 0)
	{
		puts("is positive")
	}else if (n < 0)
	{
		puts("is negative")
	}
	return (0);
}
