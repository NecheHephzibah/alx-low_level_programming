#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	if (d->name != NULL && d->owner != NULL)
	{
		strcpy(d->name, name);
		strcpy(d->owner, owner);

		d->age = age;
	}
	else
	{
		printf("Error");
	}

}
