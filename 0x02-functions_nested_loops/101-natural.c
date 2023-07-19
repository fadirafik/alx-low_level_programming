#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * main - counts eve
 * Return:Always 0 (succes)
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0) || (i % 6 == 0) || (i % 9 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
