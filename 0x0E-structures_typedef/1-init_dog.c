#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a structure
 * @d: struct
 * @name: name
 * @age:  age
 * @owner:  owner
 * Return: null
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
