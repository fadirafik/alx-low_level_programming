#include "main.h"

/**
 * _strstr - searches for the first occurence of needle in haystack
 * @needle: the user input string to be searched for
 * @haystack: the string to be searched in
 *
 * Return: return a pointer to the beginning of matching strings
 */

char *_strstr(char *haystack, char *needle)
{
	int j;
	int h;

	for (j = 0; haystack[j] != '\0' ; j++)
	{
		for (h = 0; needle[h] != '\0'; h++)
		{
			if (haystack[j +  h] != needle[h])
			{
				break;
			}
		}
		if (!needle[h])
			return (&haystack[j]);
	}
	return (0);
}
