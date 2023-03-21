#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees mem allocated for the mem struct
 * @d: pointer to the struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

