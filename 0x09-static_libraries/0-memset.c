#include "main.h"

/**
 * _memset - changes all the characters specified to
 * a certain character
 * @s: is the string input from the user
 * @b: is the character to be added
 * @n: is the number of times the character should be added
 *
 * Return: the string changed
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
