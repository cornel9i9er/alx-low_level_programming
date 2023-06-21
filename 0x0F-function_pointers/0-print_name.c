#include "function_pointers.h"
/**
 * print_name - prints a name.
 *
 * @name: name.
 * @f: calling func.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
