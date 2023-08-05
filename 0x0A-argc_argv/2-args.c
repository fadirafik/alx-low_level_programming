#include <stdio.h>

/**
 * main - prints all the parameters in the program
 * @argc: number of parameters inserted
 * @argv: names of the parameters inserted
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}


