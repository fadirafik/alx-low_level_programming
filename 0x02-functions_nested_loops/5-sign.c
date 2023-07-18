#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_sign - check the sign of an integer.
 * @n: is an entry of user
 * Return: 1 if c is lower case
 * 0 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
