
/**
 * print_name - calls a passed function
 *
 * @name: name to be printed
 * @f: function to call.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		name = "";
	f(name);
}
