#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print members of the struct dog
 * @d: pointer to the struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
