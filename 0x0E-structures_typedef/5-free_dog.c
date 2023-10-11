#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: pointer of type dog
 */

void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

	exit(EXIT_SUCCESS);
}
