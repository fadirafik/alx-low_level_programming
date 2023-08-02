#include "main.h"

/**
 * factorial - recursively returns the factorial of n
 * @n: is the input to be factorialized
 *
 * Return: the factorial of n
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
