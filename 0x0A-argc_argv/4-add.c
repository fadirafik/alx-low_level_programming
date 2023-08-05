#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - multiplies the parameters of the program
 * @argc: number of parameters inserted
 * @argv: names of the parameters inserted
 *
 * Return: 0 if successfull 1 if argc < 2
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned long j;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}

