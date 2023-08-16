#include <stdio.h>
#include "function_pointers.h"


/**
 * print_name - prints a name
 * @name: name input to be printed
 * @f: function input
 *
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
