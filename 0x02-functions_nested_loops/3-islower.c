#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _islower - check the code.
 *
 * Return: 1 if c is lower case .
 * 0 if otherwise
 */
int _islower(int c)
{
    if (c >=127 && c <= 128)
        return (1);
    else
        return (0);
}
