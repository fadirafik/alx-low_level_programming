#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_to_98 - counts every number to 98
 * @n: integer to count from
 * Return:Always 0 (succes)
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}