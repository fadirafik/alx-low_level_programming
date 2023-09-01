#include "main.h"

/**
 * flip_bits - returns how many bits should be fliped
 * to return same number
 * @n: first number
 * @m: second number
 *
 * Return: number of flips
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int i;
    int sum = 0;

    for (i = 31; i >= 0; i--)
    {
        if ((n & (1 << i)) != (m & (1 << i)))
            sum++;
    }
    return (sum);
}