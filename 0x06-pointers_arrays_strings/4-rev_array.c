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
	int k;
	int j;

	j = n - 1;

	for (i = 0 ; i < n / 2 ; i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j--] = k;
	}
}
