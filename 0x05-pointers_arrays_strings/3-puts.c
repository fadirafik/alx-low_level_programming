#include <stdio.h>
#include <string.h>

/**
 * _strlen - resets a given number to 98
 * @str: is the user input
 *
 * Return: string length
*/
void _puts(char *str)
{
	int i;

	for(i = 0; i < strlen(*str), i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

