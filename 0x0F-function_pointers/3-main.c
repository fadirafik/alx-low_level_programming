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
	int (*oper)(int, int);
	int si = *argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oper =  get_op_func(argv[2]);
	if (si == '+' || si == '-' || si == '*' || si == '/' || si == '%')
	{
		first = atoi(argv[1]);
		second = atoi(argv[3]);
		printf("%d\n", oper(first, second));
	}
	if (!oper)
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
