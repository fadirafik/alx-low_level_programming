#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates array and initializes it with
 * a specific character
 * @size: size of the arra
 * @c: character to  begin the array with
 * Return: null if size is 0 else return the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (s == NULL || size == 0)
		return (0);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}

