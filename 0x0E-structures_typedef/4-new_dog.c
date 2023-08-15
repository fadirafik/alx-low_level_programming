#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new instance of a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	if (d == NULL)
		return (NULL);

	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

