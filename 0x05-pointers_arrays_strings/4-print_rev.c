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
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
