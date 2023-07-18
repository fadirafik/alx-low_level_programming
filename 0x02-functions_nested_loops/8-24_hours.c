#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * jack_bauer - counts every minute in a day
 * Return:Always 0 (succes)
 */
int void jack_bauer(void)
{
    for (int i; i < 24 ; i++)
    {
        for (int j; j < 60 ; j++)
        {
            _putchar(i);
            _putchar(':');
            _putchar(j);
        }
    }
}
