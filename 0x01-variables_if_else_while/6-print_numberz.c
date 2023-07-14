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
	char ch;
	char eo;

	eo = '\n';
	for (ch = 'a'; ch <= 'j'; ch++)
	{
		putchar (ch - 49);
	}
	putchar (eo);
	return (0);
}
