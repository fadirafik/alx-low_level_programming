#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - copies two strings
 * @dest: is the user input
 * @src: is the number to print to
 *
 * Return: void
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
