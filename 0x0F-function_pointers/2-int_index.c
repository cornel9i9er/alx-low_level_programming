#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array.
 *
 * @array: array.
 * @size: array size.
 * @cmp: pointer to comparing function.
 *
 * Return: index of integer. -1 if none.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
