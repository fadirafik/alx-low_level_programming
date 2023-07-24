#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - resets a given number to 98
 * @str: is the user input
 *
 * Return: void
*/
void puts_half(char *str)
{
	int i = 0;

    while (i != '\0')
        i++;

    i = (i - (i/2));
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
