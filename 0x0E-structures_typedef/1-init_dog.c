#include <stdio.h>
#include "dog.h"

/**
* init_dog - structure initializes dog variable
* @d: pointer to all other variables
* @name: name of the dog
* @age: age of the dog
* @owner: name of the owner of the dog
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
