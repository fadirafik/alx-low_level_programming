#include "3-calc.h"

/**
 * main - the main fuction
 * @argc: number of arguments
 * @argv: the arguments
 * Return: nothing
*/
int main(int argc, char *argv[])
{
	int first;
	int second;
	int oper;
	int si = *argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (si == '+' || si == '-' || si == '*' || si == '/' || si == '%')
	{
		if ((*argv[2] == '/' || *argv[2] == '%') && (*argv[3] == '0'))
		{
			printf("Error\n");
			exit(100);
		}
		first = atoi(argv[1]);
		second = atoi(argv[3]);
		oper =  get_op_func(argv[2])(first, second);
		printf("%d\n", oper);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
