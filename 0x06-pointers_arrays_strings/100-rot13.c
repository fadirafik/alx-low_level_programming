#include "main.h"

/**
 * rot13 - changes specific characters to some numbers
 * @s: string input
 *
 * Return: string
 */
char *rot13(char *s)
{
	int i;
	int j;

	char *c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *d = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = d[j];
				break;
			}
		}
	}

	return (s);
}
