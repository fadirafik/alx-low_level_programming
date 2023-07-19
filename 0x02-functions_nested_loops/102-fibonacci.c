#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * main - counts every fibonnaci number
 * Return:Always 0 (succes)
 */
int main(void)
{
	int i;
	long small;
    long big;
    long tmp;

	small = 1;
    big = 2;
    printf("%ld, ", small);
	for (i = 0; i < 49; i++)
	{
        printf("%ld, ", big);
        tmp = big;
        big = small + big;
        small = tmp;
	}
	printf("\n");
	return (0);
}