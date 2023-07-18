#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha - check the code.
 * @n: is an entry of user
 * Return: 1 if c is lower case
 * 0 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
