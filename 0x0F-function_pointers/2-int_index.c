#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array input of the user
 * @size: size of the array
 * @cmp: function that compares int to the item in
 * the array
 *
 * Return: an integer that is searched for
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	{
		return (0);
	}
	if (size < 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
