#include "main.h"

/**
 * _strpbrk - return the part of s where it is
 * matching accept
 * @s: the user input string
 * @accept: the character to be searched for
 *
 * Return: return the parts of matching strings
 */

char *_strpbrk(char *s, char *accept)
{
	int j;
	int h;

	for (j = 0; s[j] != '\0' ; j++)
	{
		for (h = 0; accept[h] != '\0'; h++)
		{
			if (s[j] == accept[h])
			{
				return (s + j);
			}
		}
	}
	return (0);
}
