/**
 * print_array - print n array elements
 *@a: pointer to array
 *@n: reps no of elements in array
 *
 *Return: always ero here none
 */
void print_array(int *a, int n)
{
	int i = n;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
