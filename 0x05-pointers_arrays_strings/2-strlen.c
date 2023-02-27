/**
 * _strlen - len string
 *@s: sring array
 *
 *Return: always 0
 */
int _strlen(char *s)
{
	int ret = 0;

	while (s && (s++) != '\0')
	{
		ret++;
	}
	return (ret);
}

