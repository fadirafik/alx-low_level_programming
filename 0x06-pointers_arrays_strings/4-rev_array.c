#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 *
 * Return: a
 */
void reverse_array(int *a, int n)
{
	int i;
	int k[n];

	for (i = 0 ; i < n ; i++)
		k[i] = a[i];

	for (int j = 0; j < n ; j++)
	{
		a[i] = k[n - 1 - i];
	}
}
