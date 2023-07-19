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

    if (n > 98)
    {
        k = n -98;
        for (i = n; i >= 98 ; i--)
        {
            f = 98 + i;
		    putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
    }
    else if (n < 98)
    {
        k = 98 - n;
            for (i = n; i <= 98 ; i++)
            {
                if (i < 10)
                {
                    putchar(i + '0');
                }
                else
                {
                    putchar((i / 10) + '0');
                    putchar((i % 10) + '0');
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
