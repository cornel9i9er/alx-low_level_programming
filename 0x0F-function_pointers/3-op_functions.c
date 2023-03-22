#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two  numbers
 * @a: int number.
 * @b: int number.
 *
 * Return: result of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two  numbers
 * @a: int number.
 * @b: int number.
 *
 * Return: result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: int number.
 * @b: int number.
 *
 * Return: result of a x b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: int number.
 * @b: int number.
 *
 * Return: result of a / b or exit if b == 0
 */
int op_div(int a, int b)
{
	if  (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds modulus of num a wit b
 * @a: int number.
 * @b: int number.
 *
 * Return: modulus of a % b or exits before if b == 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
