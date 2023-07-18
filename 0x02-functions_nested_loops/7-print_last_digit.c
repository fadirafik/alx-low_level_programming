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
	if (n > 10 || n < -10)
	{
		return (n % 10);
	}
	else
	{
		return (n);
	}
}
