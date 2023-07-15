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
	int ch;
	int eo;
	int com;
	int sp;

	eo = '\n';
	sp = ' ';
	com = ',';
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar (ch);
		if (ch != '9')
		{
		putchar (com);
		putchar (sp);
		}
	}
	putchar (eo);
	return (0);
}
