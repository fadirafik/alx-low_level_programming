#include "main.h"

/**
 * string_toupper - puts a string to uppercase
 * @s: string input
 *
 * Return: string in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;


	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] =  s[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (s);
}
