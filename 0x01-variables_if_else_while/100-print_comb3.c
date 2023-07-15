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
	int nu;
	int eo;
	int com;
	int sp;

	eo = '\n';
	sp = ' ';
	com = ',';
	for (ch = '0'; ch <= '9'; ch++)
	{
		for (nu = '0'; nu <= '9'; nu++)
		{
			if (nu > ch)
			{
				putchar (ch);
				putchar (nu);
				if (nu == '9' && ch == '8')
				break;
				putchar (com);
				putchar (sp);
			}
			else
				continue;
		}
	}
	putchar (eo);
	return (0);
}
