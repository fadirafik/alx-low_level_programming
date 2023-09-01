#include "main.h"

/**
 * clear_bit - changes a bit to zero at a given index
 * @n: number given
 * @index: index to be changed at
 *
 * Return: pointer to changed number
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);
	return (*n);

}
