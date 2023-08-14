#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memorry using malloc
 * @b: user input
 *
 * Return: nothing
*/

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c != NULL)
		return (c);
	else
		return (98);
}
