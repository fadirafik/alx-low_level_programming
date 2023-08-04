#include "main.h"

/**
 * _strchr - locates a specific character in a string
 * @s: the user input string
 * @c: the character to be searched for
 *
 * Return: pointer to the character c in the string s
 * or null if nothing is found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
