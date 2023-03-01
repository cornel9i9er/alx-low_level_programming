/**rev_string - reverse
 *
 *@s: string variable
 *
 *Return: always 0
 * */
void rev_string(char *s)
{
	int len = 0;
	int j = 0;

	while (s[j] && *(s++) != '\0')
	{
		len++;
		j++;
	}
	if (len % 2 != 0)
	{
		len = (len - 1) / 2;
		int i;

		for (i = 0; i < len; i++)
		{
			char r = s[len - 1 - i];

			s[len - i - 1] = s[i];
			s[i] = r;
		}
	}
	else
	{
		len = len / 2;
		int i;

		for (i = 0; i < len; i++)
		{
			char r = s[len - 1 - i];

			s[len - i - 1] = s[i];
			s[i] = r;
		}	
	}
}
