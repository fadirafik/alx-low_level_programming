#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - find integers in a string
 * @s: is the user input
 *
 * Return: integer in a string
*/
int _atoi(char *s)
{
	int i = 0;
	int k;
	int num, minuses, pluses;

	num = 0;
	minuses = 0;
	pluses = 0;
	while (s[i] != '\0')
		i++;

	for (k = 0; k < i ; k++)
	{
		if (s[k] == 45)
			minuses++;
		if (s[k] == 43)
			pluses++;
		if (s[k] <= 57 && s[k] >= 48)
		{
			num = (num * 10) + (s[k] - 48);
			if (s[k + 1] == ' ')
				break;
		}
	}
	if (minuses > pluses)
		num = -num;

	return (num);
}
