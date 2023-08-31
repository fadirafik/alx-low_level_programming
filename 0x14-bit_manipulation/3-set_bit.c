#include "main.h"

/**
 * set_bit - sets a bit at a specified index
 * @n: input number
 * @index: index to be changed
 *
 * Return: changed value
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;

	if (index > 64)
		return (-1);

	s = 1 << index;
	return (n | s);
}
