#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - resets a given number to 98
 * @s: is the user input
 *
 * Return: string length
*/
void print_rev(char *s)
{
	unsigned long i;

	for (i = strlen(s); i <= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
