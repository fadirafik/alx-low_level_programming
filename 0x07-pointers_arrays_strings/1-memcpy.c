#include "main.h"

/**
 * _memcpy - changes all the characters specified to
 * a certain character
 * @src: is the string input from the user to be copied
 * @dest: is the destination to be copied to
 * @n: is the number of bytes to be copied
 *
 * Return: the string changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
