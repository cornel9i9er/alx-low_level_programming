#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains dogs info
 *
 * @name: name of dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 * Description: longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
