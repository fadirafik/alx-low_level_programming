#include "main.h"

/**
 * print_number - prints an integer
 * @n: the input from the user
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int s;

	s = n;
	if (n < 0)
		_putchar('-');

	if (s / 10)
		print_number(s / 10);

	_putchar((s % 10) + '0');

}
