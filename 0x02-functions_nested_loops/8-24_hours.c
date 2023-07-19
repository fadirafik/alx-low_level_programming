#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * jack_bauer - counts every minute in a day
 * Return:Always 0 (succes)
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = '0'; i < '24'; i++)
	{
		for (j = '0'; j < '60' ; j++)
		{
			_putchar(i);
			_putchar(':');
			_putchar(j);
			_putchar('\n');
		}
	}
}
