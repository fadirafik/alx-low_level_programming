#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_last_digit - prints last digit
 * Return:Always 0 (success)
 * @n: input from user
 */
int print_last_digit(int n)
{
    int last = n % 10;

    if (last < 0)
        last *= -1;

    _putchar(last + '0');
    
    return(last);
}
