#include <stdio.h>
/*
* this is me mario
*/

/**
* main - prints the whole decimal numbers
* Return: Always 0 (success)
*/
int main(void)
{
	int i;
	char eo;

	eo = '\n';
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar (eo);
	return (0);
}
