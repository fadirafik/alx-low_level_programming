#include "main.h"

/**
 * _strlen_recursion - recursively returns the length of a string
 * @s: is the string to be printed
 *
 * Return: an int which is the length of the string 
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}


	_print_rev_recursion(s + 1);
	_putchar(*s);
}
