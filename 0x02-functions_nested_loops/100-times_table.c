#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_times_table - gives back multiplication table of n
 * @n: is the user input
 */
void print_times_table(int n)
{
    int i;
    int j;
    int k;

    if (n >= 0 && n < 15)
    {
        for (i = 0; i <= n ; i++)
        {
            for (j = 0; j <= n ; j++)
            {
                k = j * i;
                if (k < 10)
                {
                    putchar(k + '0');
                }
                if(k <= 99)
                {
                    putchar(' ');
                    putchar(' ');
                }
                else if (k >= 100)
                {
                    putchar(' ');
                    putchar(' ');   
                    putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10)) % 10 + '0');
				}
                else
                {
                    putchar((k / 10) + '0');
                    putchar((k % 10) + '0');
                }
                if (j != n)
                {
                    putchar(',');
                    putchar(' ');
                }
        }
            putchar('\n');
        }
    }
}