#include "main.h"

/**
 * _strncpy - copies two strings
 * @dest: string to append to
 * @src: string to add
 * @n: specific number of digits to append from source
 *
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	l = 0;

	while (src[l] != '\0' && l < n)
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}
