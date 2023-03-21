#include "dog.h"
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * init_dog - check the code
 * @d: pointer to structure.
 * @name: name to init.
 * @age: age to init.
 * @owner: owner's name to init.
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

