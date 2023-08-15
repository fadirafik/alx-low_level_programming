#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int len(char *s);
char *cop(char *s1, char *s2);

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
	dog_t *d;
	int namel = 0, ownl = 0;

	if (name != NULL && owner != NULL)
	{
		namel = len(name);
		ownl = len(owner);
		d = malloc(sizeof(dog_t));
		if (d == NULL)
			return (NULL);

		d->name = malloc(sizeof(char) * namel);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		d->owner = malloc(sizeof(char) * ownl);
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
	d->name = cop(name, d->name);
	d->age = age;
	d->owner = cop(owner, d->owner);
	}
	return (d);
}

/**
 * len - ff
 * @s: dd
 *
 * Return: len
*/
int len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i++;
	return (i);
}

/**
 * cop - gag
 * @s1: ss
 * @s2: dd
 *
 * Return: sf
*/
char *cop(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i++] = '\0';
	return (s2);
}
