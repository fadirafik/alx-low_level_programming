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
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar (ch);
	}
	for (ch = 'a'; ch <= 'f' ; ch++)
	{
		putchar (ch);
	}
	putchar (eo);
	return (0);
}
