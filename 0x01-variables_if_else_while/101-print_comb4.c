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
	int fj;
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
			for (fj = '0'; fj <= '9'; fj++)
			{
				if (fj > nu && nu > ch)
				{
					putchar (ch);
					putchar (nu);
					putchar (fj);
					if (fj == '9' && nu == '8' && ch == '7')
					break;
					putchar (com);
					putchar (sp);
				}
				else
					continue;
			}

		}
	}
	putchar (eo);
	return (0);
}
