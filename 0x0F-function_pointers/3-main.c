#include "3-calc.h"

/**
 * main - the main fuction
 * @argc: number of arguments
 * @argv: the arguments
 * Return: nothing
*/
int main(int argc, char *argv[])
{
	int first = atoi(argv[1]);
	int second = atoi(argv[3]);
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oper =  get_op_func(argv[2]);

	if (!oper)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", oper(first, second));
	return (0);
}
