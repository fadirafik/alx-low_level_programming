#include "main.h"

/**
 * _strspn - return the number of bytes contained in a substring
 * matching accept
 * @s: the user input string
 * @accept: the character to be searched for
 *
 * Return: return the number of bytes of matching strings
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int i;
	int j;
	int h;

	for (j = 0; s[j] != '\0' ; j++)
	{
		i = 0;
		for (h = 0; accept[h] != '\0'; h++)
		{
			if (s[j] == accept[h])
			{
				n++;
				i = 1;
				continue;
			}
		}
		if (i == 0)
			return (n);
	}
	return (0);
}
