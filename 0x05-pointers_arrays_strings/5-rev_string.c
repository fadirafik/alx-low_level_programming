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
	char *arr[strlen(s)];

	for (i = 0; i <  strlen(s); i++)
	{
		arr[strlen(s)-i] = s[i] ;
	}
	for (i = 0; i <  strlen(s); i++)
	{
		*(s + i) = arr[i] ;
	}
	_putchar('\n');
}
