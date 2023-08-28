#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  void free_dog(dog_t *d)
 * @d: pointer to members of the struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

