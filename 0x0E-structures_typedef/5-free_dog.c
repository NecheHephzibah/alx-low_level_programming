#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  a function that frees dogs.
 * @d: pointer to menbers of the struc
 * @name: name to initialize
 * @age: age, one of the members to 
 * @owner: owner, one of the members to a struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
