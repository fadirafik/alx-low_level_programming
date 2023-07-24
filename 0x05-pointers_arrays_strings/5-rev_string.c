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
	int i;
	int n = strlen(s);
	char *arro[n];

	for (i = 0; i <  strlen(s); i++)
	{
		arro[strlen(s)-i] = s[i] ;
	}
	for (i = 0; i <  strlen(s); i++)
	{
		*(s + i) = arro[i] ;
	}
	_putchar('\n');
}
