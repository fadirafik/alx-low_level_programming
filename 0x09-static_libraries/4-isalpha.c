#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha - check the code.
 * @c: is an entry of user
 * Return: 1 if c is lower case
 * 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 128)
		return (1);
	else
		return (0);
}
