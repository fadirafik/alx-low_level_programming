#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all strings
 * @ac: number of arguments
 * @av: strings to concatenate
 *
 * Return: all strings concatenated or null of any failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, c, s;
	char *con;

	if (ac == 0)
	{
		return (NULL);
	}

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	con = malloc((c + 1) * (sizeof(char)));
	if (con == NULL)
	{
		free(con);
		return (NULL);
	}

	for (i = j = s = 0; s < c; j++, s++)
	{
		if (av[i][j] == '\0')
		{
			con[s] = '\n';
			i++;
			s++;
			j = 0;
		}
		if (s < c - 1)
			con[s] = av[i][j];
	}
	con[s] = '\0';
	return (con);
}
