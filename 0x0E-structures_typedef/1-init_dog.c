#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: dog identification
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
