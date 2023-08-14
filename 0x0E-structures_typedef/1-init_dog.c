#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intializes dog structure.
 * @d: dog structure.
 * @name: dog name.
 * @age: dog age.
 * @owner: name of the dog owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
