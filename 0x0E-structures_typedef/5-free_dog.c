#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: strct dog
 *
 * Return: nothing
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
