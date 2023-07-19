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

    if (n >= 0 && n <= 15)
    {
        for (i = 0; i <= n ; i++)
        {

            for (j = 0; j <= n ; j++)
            {
                _putchar(',');
                _putchar(' ');

                k = j * i;

                if (k < 10)
                {
                    _putchar(' ');
                }
                if (k <= 99)
                {
                    _putchar(' ');
                }
                if (k > 99)
                {
					_putchar((k / 100) + '0');
					_putchar(((k / 10)) % 10 + '0');             
                }
                else if (k <= 99 && k >= 10)
				{
					_putchar((k / 10) + '0');
				}
				_putchar((k % 10) + '0');
			}
			_putchar('\n');
        }    
    }
}
