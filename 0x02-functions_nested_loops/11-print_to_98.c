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
    int k;
    int i;
    int f;

    if (n > 98)
    {
        k = n -98;
        for (i = 0; i < k ; i++)
        {
            f = 98 + i;
		    putchar((f / 10) + '0');
			putchar((f % 10) + '0');
		}
    }
    else if (n < 98)
    {
        k = 98 - n;
            for (k ; k <= n ; k++)
            {
                if (k < 10)
                {
                    putchar(k + '0');
                }
                else
                {
                    putchar((k / 10) + '0');
                    putchar((k % 10) + '0');
                }
            }
    }        
    else
    {
        k = 98;
        putchar((k / 10) + '0');
        putchar((k % 10) + '0');
    }
}
