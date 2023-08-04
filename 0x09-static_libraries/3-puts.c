#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - resets a given number to 98
 * @str: is the user input
 *
 * Return: string length
*/
void _puts(char *str)
{
	unsigned long i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

