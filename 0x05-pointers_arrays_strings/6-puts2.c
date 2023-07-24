#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - resets a given number to 98
 * @s: is the user input
 *
 * Return: string length
*/
void puts2(char *str)
{
    int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
