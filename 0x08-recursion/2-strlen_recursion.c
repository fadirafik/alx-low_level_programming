#include "main.h"

/**
 * _print_rev_recursion - recursively prints a string in reverse
 * @s: is the string to be printed
 *
 * Return: nothing
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
