/**
 * reverse_array - reverse
 *@a: array param
 *@n: array length
 *Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int itr;

	if (n % 2 != 0)
	{
		itr = (n - 1) / 2;
	}
	else
	{
		itr = n / 2;
	}

	for (i = 0; i < itr; i++)
	{
		int z = a[n - 1 - i];

		a[n - 1 - i] = a[i];
		a[i] = z;
	}
}
