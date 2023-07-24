#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - resets a given number to 98
 * @s: is the user input
 *
 * Return: string length
*/
void rev_string(char *s)
{
	int i = 0, rev, ord;
	char v;

	while (s[i] != '\0')
		i++;

	i--;
	rev = i;
	ord = i / 2;
	i = 0;

	while (i <= ord)
	{
		v = s[i];
		s[i] = s[rev];
		s[rev] = v;
		i++;
		rev--;
	}
}

