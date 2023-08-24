#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
 * first - defines the first line
 * Return: nothing.
*/
void first(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
