#include "main.h"
#include <stdio.h>

/*
* this is me mario
*/

/**
* main - prints the whole alphabet
* Return: Always 0 (success)
*/
int main(void)
{
	print_alphabet();
	return (0);
}


/**
* print_alphabet - prints the whole alphabet
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
	int i;

	i = 97;
	while (i != 123)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
