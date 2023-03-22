/**
 * array_iterator - runs a function through elements of an array.
 *
 * @array: array with elements
 * @size: no of array members
 * @action: function to run through array.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
