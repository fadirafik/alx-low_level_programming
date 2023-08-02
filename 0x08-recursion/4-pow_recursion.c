#include "main.h"

/**
 * _pow_recursion - recursively returns x to the power of y
 * @x: the user input
 * @y: the power to be assigned
 *
 * Return: the factorial of n
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
