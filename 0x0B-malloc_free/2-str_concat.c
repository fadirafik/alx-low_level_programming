#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: two strings concatenated or null of any failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int c;
	int s;
	char *con;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	con = malloc((i + j + 1) * (sizeof(char)));
	if (con == NULL)
		return (NULL);

	for (c = 0 ; c < i; c++)
		con[c] = s1[c];

	for (s = 0; s < j + 1; s++)
		con[i + s] = s2[s];
	return (con);
}
