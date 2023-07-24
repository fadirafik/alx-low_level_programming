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
	int k;

    while (i != '\0')
        i++;

    k = (i - (i/2));
	while (k <= i)
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
