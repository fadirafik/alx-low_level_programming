#include "main.h"
#include <stdio.h>

/**
 * set_string - sets a value of a pointer to a char 
 * @s: string to be derefrenced
 * @to: the pointer to the char
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	s = &to;
}
