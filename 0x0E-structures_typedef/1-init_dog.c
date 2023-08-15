#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialized struct dog
 * @d: name of struct
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
