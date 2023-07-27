#include "main.h"

/**
 * cap_string - capitalizes all the words in a string
 * @s: string input
 *
 * Return: string in uppercase
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i - 1] < 65 || s[i - 1] > 122 || (s[i - 1] < 97 && s[i - 1] > 90))
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] =  s[i] - 32;
				i++;
			}
			else
			{
				s[i] = s[i];
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	return (s);
}
