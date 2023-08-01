#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of two diagonalls of a square matrix
 * @a: user input
 * @size: size of the matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum = 0;
	unsigned int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d \n", sum, sum2);
}
