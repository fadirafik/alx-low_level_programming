#include "main.h"


/**
 * _sqrt_recursion - finds the square root of n
 * @n: the user input
 *
 * Return: the square root of n
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}


/**
 * square - function that finds the square root of a number n
 * @n: the number to be found
 * @i: number of recursions
 *
 * Return: the suare root of n
*/

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	if (n < 0)
		return (-1);
	return (square(n, i + 1));
}
