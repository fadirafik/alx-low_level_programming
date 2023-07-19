#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * main - counts every fibonnaci number
 * Return:Always 0 (succes)
 */
int main(void)
{
	long small;
	long big;
	long tmp;
	long sum;

	small = 1;
	big = 2;
	while (big < 4000000)
	{
		tmp = big;
		big = small + big;
		small = tmp;
		if (big % 2 == 0)
		{
			sum += big;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
