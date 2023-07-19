#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * main - counts every fibonnaci number
 * Return:Always 0 (succes)
 */
int main(void)
{
	unsigned int small;
	unsigned int big;
	unsigned int tmp;
	unsigned int sum;

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
	printf("%u\n", sum);
	return (0);
}
