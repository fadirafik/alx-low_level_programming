#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - prints every item of an array till
 *  a given number n
 * @a: is the user input
 * @n: is the number to print to 
 * 
 * Return: void
*/
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
				{
					printf("%d", *(a + i));
					break;
				}
			printf("%d, ", *(a + i));
		}
	}
	printf("\n");
}
