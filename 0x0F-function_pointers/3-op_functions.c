#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two ints
 * @a: first int
 * @b: second int
 *
 * Return: the result of the operation
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs an operation on two ints
 * @a: first int
 * @b: second int
 *
 * Return: the result of the operation
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs an operation on two ints
 * @a: first int
 * @b: second int
 *
 * Return: the result of the operation
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs an operation on two ints
 * @a: first int
 * @b: second int
 *
 * Return: the result of the operation
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - performs an operation on two ints
 * @a: first int
 * @b: second int
 *
 * Return: the result of the operation
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
