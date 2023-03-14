#include <unistd.h>

/**
 * main - the father of the program
 * @argc: contains command line arugument count
 * @argv: contain char string pointers of command line args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j = 0;

	for (i = 0; i < argc; i++)
	{
		while (1)
		{
			if (*(argv[i] + j) != '\0')
			{
				write(1, argv[i] + j, sizeof(char));
				j++;
			}
			else
			{
				write(1, "\n", sizeof(char));
				j = 0;
				break;
			}
		}
		
	}
	return (0);
}
