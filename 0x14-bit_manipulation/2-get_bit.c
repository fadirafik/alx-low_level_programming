#include "main.h"

/**
 * get_bit - gets the bit value at a specific
 * index
 * @n: number input
 * @index: index to search for
 *
 * Return: returns value or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (n & (1 << index))
		return (1);
	else if (!(n & (1 << index)))
		return (0);
	return (-1);
}
