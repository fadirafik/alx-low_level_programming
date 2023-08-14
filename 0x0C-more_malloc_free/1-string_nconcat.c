#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: number of characters of s2 to be concatenated
 *
 * Return: NULL if empty string is passed and returns the
 * concatenated strings if succesfull
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len;
	char *con;
	int i;
	unsigned int j;
	int num;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	len = strlen(s1) + num + 1;
	con = malloc(len * sizeof(char));
	if (con == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		con[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{
		con[i + j] = s2[j];
	}
	con[i + j] = '\0';

	return (con);
}
