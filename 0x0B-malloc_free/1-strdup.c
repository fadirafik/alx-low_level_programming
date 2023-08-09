#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies a string and returns a pointer to the copy
 * @str: is the string given by the user
 *
 * Return: Null if malloc fails or a pointer to the copied string
 */
char *_strdup(char *str)
{
	int i;
	char *cp;
	int c;

        if (str == NULL)
        	return (NULL);

	while (str[i] != '\0')
		i++;

	cp = malloc(i + 1 * (sizeof(char)));

	for (c = 0; c < i; c++)
		cp[c] = str[c];

	if (cp == NULL)
		return (NULL);
	
	return (cp);
}

