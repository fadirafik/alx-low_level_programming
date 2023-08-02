#include "main.h"

/**
 * _print_rev_recursion - recursively prints a string in reverse
 * @s: is the string to be printed
 *
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}


	_print_rev_recursion(s + 1);
	_putchar(*s);
}
