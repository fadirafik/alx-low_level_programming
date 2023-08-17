#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up all the arguments
 * @n: number of arguments
 *
 * Return: sum of all the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_list args;

	if (n)
	{
		va_start(args, n);
		for (i = 0; i < (int)n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
	}
	return (sum);
}
