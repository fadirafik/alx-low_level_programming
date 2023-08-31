#include "main.h"

/**
 * print_binary - prints a decimal in binary
 * @n: input of a decimal
 *
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long cur = 0;
	int count = 0;
	int i;

	for (i = 63; i >= 0; i--)
	{
		cur = n >> i;
		if (cur & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}

	}
	if (!count)
	{
		_putchar('0');
	}
}
