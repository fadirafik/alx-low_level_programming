#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - resets a given number to 98
 * @str: is the user input
 *
 * Return: void
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
