#include "function_pointers.h"
/**
 * int_index - searches for an int in an array.
 * @array: array to search
 * @size: no of array members
 * @cmp: pointer to a compare function
 *
 * Return: index of first found int or -1 if none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
