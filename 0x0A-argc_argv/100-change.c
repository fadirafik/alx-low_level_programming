#include <stdio.h>
#include <stdlib.h>

/**
 * main - figures out the number of dollar bills to be given
 * @argc: number of parameters inserted
 * @argv: names of the parameters inserted
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int money;
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);

	while (money > 0)
	{
		change++;
		if ((money - 25) >= 0)
		{
			money -= 25;
			continue;
		}
		if ((money - 10) >= 0)
		{
			money -= 10;
			continue;
		}
		if ((money - 5) >= 0)
		{
			money -= 5;
			continue;
		}
		if ((money - 2) >= 0)
		{
			money -= 2;
			continue;
		}
		money--;
	}
	printf("%d\n", change);
	return (0);
}

