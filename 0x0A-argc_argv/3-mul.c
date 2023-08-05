#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the parameters of the program
 * @argc: number of parameters inserted
 * @argv: names of the parameters inserted
 *
 * Return: 0 if successfull 1 if argc < 2
 */
int mul(int argc, char *argv[])
{
	if (argc > 3)
		return (1);
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

