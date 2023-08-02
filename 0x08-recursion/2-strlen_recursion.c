#include "main.h"

/**
 * _strlen_recursion - recursively finds the length of a string
 * @s: is the string to be measured
 *
 * Return: the length in int
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
