#include "dog.h"

/**
 * print_dog -  function that prints a struct dog
 * @d: pointer of struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_SUCCESS);

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->age == NULL)
		d->age = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
